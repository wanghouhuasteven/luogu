#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    int last = (d + 60*c) - (b + 60*a);
    int mins = last % 60;
    int hours = (last-mins) / 60;
    cout << hours << " " << mins;
    return 0;
}
