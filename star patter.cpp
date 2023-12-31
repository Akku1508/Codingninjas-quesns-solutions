// Problem statement
// Print the following pattern

// Pattern for N = 4

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format :
// N (Total no. of rows)
// Output Format :
// Pattern in N lines
// Constraints :
// 0 <= N <= 50
// Sample Input 1 :
// 3
// Sample Output 1 :
//    *
//   *** 
//  *****
// Sample Input 2 :
// 4
// Sample Output 2 :
//     *
//    *** 
//   *****
//  *******

#include<iostream>
using namespace std;


int main(){
	 
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n-i)
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
		k-=2;
		while(k>0)
		{
			cout<<"*";
			k--;

		}
		cout<<"\n";
		i++;
	}
  
}




