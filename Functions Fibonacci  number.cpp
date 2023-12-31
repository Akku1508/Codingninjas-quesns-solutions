#include<iostream>
using namespace std;
#include "solution.h"

bool checkMember(int n) {
  int f = 0, s = 1, o = 0;

  if (n == 0) {
      return true;
  }

  while (o < n) {
    o = f + s;
    if (o == n)
    {
      return true;
    }
    f = s;
    s = o;
  }

  return false;
}


int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
