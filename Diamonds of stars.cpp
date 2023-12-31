// Problem statement
// Print the following pattern for the given number of rows.

// Note: N is always odd.


// Pattern for N = 5



// The dots represent spaces.




// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// N (Total no. of rows and can only be odd)
// Output format :
// Pattern in N lines
// Constraints :
// 1 <= N <= 49
// Sample Input 1:
// 5
// Sample Output 1:
//   *
//  ***
// *****
//  ***
//   *
// Sample Input 2:
// 3
// Sample Output 2:
//   *
//  ***
//   *



#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    int halfn=(n+1)/2;
    while (i<=n)
    {
        if(i<=halfn)
        {
                 int j=1;
            while(j<=halfn-i)
            {
                cout<<" ";
                j++;
            }
            int k=1;
            while(k<=i)
            {
                cout<<"*";
                k++;
            }
            int l=1;
            while(l<=i-1)
            {
                cout<<"*";
                l++;
            }
            cout<<"\n";
            i++;
        }
        else{
            int j=1;
            while(j<=halfn-(n-i+1))
            {
                cout<<" ";
                j++;
            }
            int k=1;
            while(k<=(n-i+1))
            {
                cout<<"*";
                k++;
            }
            int l=1;
            while (l <= (n - i)) {
                cout << "*";
                l++;
            }
            cout << "\n";
            i++;
        }
    }
}
