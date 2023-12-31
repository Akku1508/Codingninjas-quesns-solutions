#include<iostream>
using namespace std;
#include "solution.h"
bool palindrome(int n)
{
    int i=n,rvs=0,dgt;
    while(i>0)
    {
        dgt=i%10;
        rvs=rvs*10+dgt;
        i/=10;
    }
    if(rvs==n)
    {
        return true;
    }
    else{
        return false;
    }
}

int main() {
	int n;
	cin >> n;
    bool pal = palindrome(n);
    if(pal == true)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
