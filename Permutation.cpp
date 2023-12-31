#include <bits/stdc++.h>
using namespace std;
#include "solution.h"

int fac(int i)
{
    int f=1;
    for(int j=1;j<=i;j++)
    {
        f*=j;
    }
    return f;
}
int permutation(int n, int r) {
    int n_p_r=fac(n)/(fac(n-r));
    return n_p_r;

}

//main code

int main() {
    int n, r;
    cin >> n;
    cin >> r;
    
    int result = permutation(n, r);
    
    if (result == -1) {
        cout << "Please enter n >= r >= 0" <<endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}
