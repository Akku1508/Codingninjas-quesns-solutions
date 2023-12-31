#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string pat;
    cin>>pat;
    int count=0;
    int n=pat.size();
    
    for(int i=0;i<str.size();i++)
    {
        string res="";
        for(int j=i;j<n+i;j++)
        {
            res.push_back(str[j]);
        }
        if(res==pat)
        {
            cout<<i<<" ";
        }
        
    }
    
}
