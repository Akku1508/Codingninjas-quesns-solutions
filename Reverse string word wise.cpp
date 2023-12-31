#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    string output="";
    string out="";
    for(int i=0;i<=input.size();i++)
    {
        if((input[i]==' ')||(input[i]=='\0'))
        {
            for(int j=out.size()-1;j>=0;j--)
            {
                output.insert(output.begin(), out[j]);
            }
            out="";
            if (input[i] != '\0') {
                output.insert(output.begin(), ' ');
            }
        }
        else
        {
            out.push_back(input[i]);
        }
    }
    return output;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
