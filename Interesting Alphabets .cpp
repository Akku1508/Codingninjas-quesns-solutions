// Problem statement
// Print the following pattern for the given number of rows.

// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints
// 0 <= N <= 26
// Sample Input 1:
// 8
// Sample Output 1:
// H
// GH
// FGH
// EFGH
// DEFGH
// CDEFGH
// BCDEFGH
// ABCDEFGH
// Sample Input 2:
// 7
// Sample Output 2:
// G
// FG
// EFG
// DEFG
// CDEFG
// BCDEFG
// ABCDEFG

#include<iostream>
using namespace std;


int main() {
    
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            int p=n-i+j-1;
            char k='A'+p;
            cout<<k;
            p--,j++;
        }
        cout<<"\n";
        i++;
    }
    
}
