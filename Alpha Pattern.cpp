// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 3
//  A
//  BB
//  CCC
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 26
// Sample Input 1:
// 7
// Sample Output 1:
// A
// BB
// CCC
// DDDD
// EEEEE
// FFFFFF
// GGGGGGG
// Sample Input 2:
// 6
// Sample Output 2:
// A
// BB
// CCC
// DDDD
// EEEEE
// FFFFFF

#include<iostream>
using namespace std;


int main(){
    
   int n;
   cin>>n;
   int i=0;
   while(i<n)
   {
       int j=0;
       while(j<=i)
       {
           char k='A'+i;
           cout<<k;
           j++;
       }
       cout<<"\n";
       i++;
   }
    
}

