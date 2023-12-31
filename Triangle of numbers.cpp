// Problem statement
// Print the following pattern for the given number of rows.

// Pattern for N = 4



// The dots represent spaces.




// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 0 <= N <= 50
// Sample Input 1:
// 5
// Sample Output 1:
//            1
//           232
//          34543
//         4567654
//        567898765
// Sample Input 2:
// 4
// Sample Output 2:
//            1
//           232
//          34543
//         4567654

#include <iostream>
using namespace std;

int main() {
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
        int k=1,l=i;
        while(k<=i)
        {
            cout<<l;
            l++;
            k++;
        }
        l=l-2;
        while(l>=i)
        {
            cout<<l;
            l--;
        }
        cout<<"\n";
        i++;
    }
    
}
