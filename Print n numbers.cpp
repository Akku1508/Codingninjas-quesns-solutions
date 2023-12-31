// Problem statement
// Write a program that accepts a sequence of natural numbers from the user and prints each number to the console. The program should stop accepting numbers and terminate when the user enters the number 50. However, if the user enters the number 15, the program should not print that number but continue accepting more numbers. The program should make use of the break and continue statements in its implementation.

// Note:
// 1. The program should handle any sequence of natural numbers.
// 2. The program should correctly use the break statement to terminate the input sequence when the number 50 is entered.
// 3. The program should correctly use the continue statement to skip the number 15 and continue with the next number in the sequence.
// Detailed explanation ( Input/output format, Notes, Images )
// Input format
// The input is a sequence of natural numbers separated by spaces. The sequence ends when the user enters the number 50.
// Output format
// The output is the sequence of input numbers, each printed on a new line. The number 15 should be omitted from the output. The sequence ends when the number 50 is printed.
// Sample Input 1
// 10 20 -30 40 50 
// Sample Output 1
// 10 20 40  50
// Sample Input 2
// 5 15 50
// Sample output
// 5 50
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

