// Problem statement
// Print the following pattern for the given N number of rows.

// Pattern for N = 4
// 1
// 22
// 333
// 4444
// Detailed explanation ( Input/output format, Notes, Images )
// Input format :
// Integer N (Total no. of rows)
// Output format :
// Pattern in N lines
// Constraints
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
// 1
// 22
// 333
// 4444
// 55555
// Sample Input 2:
// 6
// Sample Output 2:
// 1
// 22
// 333
// 4444
// 55555
// 666666
// #include<iostream>
// using namespace std;






#include<iostream>
using namespace std;


int main(){

    int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<"\n";
		i++;
	}
  
}

