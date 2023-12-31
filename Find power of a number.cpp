// Problem statement
// Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.

// Note : For this question, you can assume that 0 raised to the power of 0 is 1



// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Two integers x and n (separated by space)
// Output Format :
// x^n (i.e. x raise to the power n)
// Constraints:
// 0 <= x <= 8 
// 0 <= n <= 9
// Sample Input 1 :
//  3 4
// Sample Output 1 :
// 81
// Sample Input 2 :
//  2 5
// Sample Output 2 :
// 32

#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int basic,allow;
	char grade;
	cin>>basic>>grade;
	float hra,pf,da,total_salary;
	hra=0.2*basic;
	da=0.5*basic;
	pf=0.11*basic;
	if(grade=='A')
	{
		allow=1700;
	}
	else if(grade=='B'){
		allow=1500;
	}
	else 
	{
		allow=1300;
	}
	total_salary= basic+hra+da+allow-pf;
	int ans=round(total_salary);
	cout<<ans;

	
	
}
