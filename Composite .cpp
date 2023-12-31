#include <bits/stdc++.h>
using namespace std;
#include "solution.h"



bool isprime(int i) {
    for (int j = 2; j < i; j++) {
        if (i % j == 0) {
            return false;
        }
    }
    return true;
}

bool print_composite(int n) {
    if (!isprime(n)) 
    {
        return true;
    }
    
}

int main()
{
    
    int n;
    cin>>n;
    
    for(int i=2; i <= n; i++){
        if(print_composite(i))
            cout<<i<<endl;
    }
 
    return 0;
}
