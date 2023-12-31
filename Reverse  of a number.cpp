// Problem statement
// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.

// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.



// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 0 <= N < 10^8
// Sample Input 1 :
// 1234
// Sample Output 1 :
// 4321
// Sample Input 2 :
// 1980
// Sample Output 2 :
// 891
/*#include<iostream>
using namespace std;


int main() 
{
    int n, reversedNumber = 0;

    cin >> n;


    while (n != 0) 
	{
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    cout<<reversedNumber;

    return 0;
}
*/
#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int temp=n,dgt,rvs=0;
	while(temp!=0)
	{
		dgt=temp%10;
		
		rvs=rvs*10+dgt;
		
		temp/=10;
	}
	cout<<rvs;
	
}



	


	

