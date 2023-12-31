#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
#include <iomanip>
using namespace std;

#include "solution.h"

class Runner
{
    int n;

public:
    void takeInput()
    {
        cin >> n;
    }

    void execute()
    {

        bool ans = checkArmstrong(n);
    }

    void executeAndPrintOutput()
    {

        bool ans = checkArmstrong(n);
        cout << (ans?"true":"false") << endl;
    }
};

int main()
{
    // freopen("testcases/large/in/input11.txt", "r", stdin);
    // freopen("testcases/large/out/output11.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}



bool checkArmstrong(int n){
	int i=n,dgt,s=0,count=0;
	while(i>0)
	{
		dgt=i%10;
		count++;
		i/=10;
	}
	int k=n,p;
	while(n>0)
	{
		dgt=n%10;
		p=1;
		for(int j=1;j<=count;j++)
		{
			p=p*dgt;
		}
		s+=p;
		n/=10;
	}
	return s==k;

}
