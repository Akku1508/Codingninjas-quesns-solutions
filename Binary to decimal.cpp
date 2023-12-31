// Problem statement
// Given a binary number as an integer N, convert it into decimal and print.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 10^9
// Sample Input 1 :
// 1100
// Sample Output 1 :
// 12
// Sample Input 2 :
// 111
// Sample Output 2 :
// 7

#include<iostream>
#include <math.h>
using namespace std;

int main() {
	int n,dgt,dnum=0,dni=1,count=0;
;
	cin>>n;
	while(n!=0)
	{
		dgt=n%10;
		dnum+=dgt*pow(2,count);
		n/=10;
		count++;

	}
	cout<<dnum;

}

