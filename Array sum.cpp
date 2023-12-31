#include<iostream>
using namespace std;

int main(){
    int arr[1000000];
    int n,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s+=arr[i];
    }
    cout<<s;
    
}


