#include <bits/stdc++.h>
using namespace std;

int main()
{
    int used;
    cin >> used;
    float origin;
    if(used <= 150)
    {
        origin = used * 0.4463;
    }
    else if(used <= 400)
    {
        origin = (used - 150) * 0.4663 + 66.945;
    }
    else
    {
        origin = (used - 400) * 0.5663 + 183.52;
    }
    cout << fixed << setprecision(1) << origin;
    return 0;
}
