#include <bits/stdc++.h>

using namespace std;

#include "solution.h"

vector<int> printDivisors(int n) {
    int i=1;
    vector<int> divisors;

    while(i<=n)
    {
        if(n%i==0)
        {
            divisors.push_back(i);
        }
        i++;
    }
    return divisors;
}

class Runner
{
    int t;
    int s[100001];

public:
    void takeInput()
    {
        t = 1;
        for (int i = 0; i < t; i++)
        {
            cin >> s[i];
        }
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            int size;
            int* res = printDivisors(s[i], size);
            delete[] res; // Don't forget to delete!
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int size;
            int* res = printDivisors(s[i], size);
            for (int j = 0; j < size; j++)
            {
                cout << res[j] << " ";
            }
            cout << endl;
            delete[] res; // Don't forget to delete!
        }
    }
};


int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
