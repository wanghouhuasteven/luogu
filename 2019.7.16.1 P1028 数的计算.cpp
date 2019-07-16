#include<bits/stdc++.h>
using namespace std;

int already[1005];

int subfunc(int);

int main()
{
    int n;
    cin >> n;
    int result;
    result = subfunc(n);
    cout << result;
    return 0;
}

int subfunc(int n)
{
    if(n == 2 || n == 3) return 2;
    int res = 1;
    if(floor(n / 2.0) > 0)
    {
        if(already[n]) return already[n];
        else
        {
            for(int i=1;i<=n/2;i++)
            {
                res += subfunc(i);
            }
        already[n] = res;
        return res;
        }
    }
    else return 1;
}
