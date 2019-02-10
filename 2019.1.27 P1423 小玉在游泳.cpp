#include <bits/stdc++.h>
using namespace std;

int main()
{
    float target;
    cin >> target;
    float already(0.0);
    int step(0);
    while(already < target)
    {
        already += pow(0.98,step) * 2 ;
        step++;
    }
    cout << step;
    return 0;
}
