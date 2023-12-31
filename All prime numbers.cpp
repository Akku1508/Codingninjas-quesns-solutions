// Problem statement
// Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).

// Print the prime numbers in different lines.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// Integer N
// Output Format :
// Prime numbers in different lines
// Constraints :
// 1 <= N <= 100
// Sample Input 1:
// 9
// Sample Output 1:
// 2
// 3
// 5
// 7
// Sample Input 2:
// 20
// Sample Output 2:
// 2
// 3
// 5
// 7
// 11
// 13
// 17
// 19


#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        int f=0,s=1,x=0;
        if(n==1){
                cout<<n;
        }
        
        else{
                for (int i = 2; i <= n; i++) {
                  x = f + s;
                  f = s;
                  s = x;
                }
                cout << x;
        }
}

