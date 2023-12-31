// Problem statement
// You are given an positive integer n. You have to check whether a number is perfect or not.

// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number. Try to use do while loop for completing the task.

// Detailed explanation ( Input/output format, Notes, Images )
// Input Format:
// The first and only line of input contains a positive integer, that denotes the value of n.
// Output Format:
// The first and only line of output prints "n is a perfect number", if n is a perfect number. Otherwise, the output should be "n is not a perfect number"
// Constraints:
// The value of n lies in the range: [1, 500]
// Time Limit: 1 second 
// Sample Input 1:
// 6
// Sample Output 1:
// 6 is a perfect number
// Sample Input 2:
// 23
// Sample Output 2:
// 23 is not a perfect number

#include<iostream>
using namespace std;
int main()
{
    int i;
    while(true)
    {
        cin>>i;
        if(i==15){
            continue;
        }
        if ((i > 0) && (i <= 50)) {
            cout << i<<" ";
        }
        if(i==50)
        {
            break;
        }
    }
}
