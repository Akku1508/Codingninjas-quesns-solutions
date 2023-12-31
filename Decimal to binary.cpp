// Problem statement
// Given a decimal number (integer N), convert it into binary and print.

// Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.
// Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.


// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 10^5
// Sample Input 1 :
// 12
// Sample Output 1 :
// 1100
// Sample Input 2 :
// 7
// Sample Output 2 :
// 111
// #include<iostream>
// using namespace std;

// int main() {
// 	// Write your code here
	
// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << "0" << endl;
        return 0;
    }

    string binary = "";
    while (n > 0) {
        int digit = n % 2;
        binary = to_string(digit) + binary;
        n /= 2;
    }

    cout << binary << endl;

    return 0;
}
