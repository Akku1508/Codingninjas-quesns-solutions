#include<iostream>
using namespace std;
#include "Solution.h"

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}


void printTable(int start, int end, int step) {
    int i=start;
    while(i<=end)
    {
        int c=(i-32)*(5.0/9);
        cout<<i<<"   "<<c<<endl;
        i+=step;

    }
    
}


