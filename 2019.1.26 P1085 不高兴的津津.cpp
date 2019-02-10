#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,s;
    int day = 0;
    bool flag = 1;
    for(int i = 1; i<=7; i++)
    {
        cin >> a >> b;
        s = a+b;
        if(s>8 && flag){
            day = i;
            flag = 0;
        }
    }
    cout << day;
    return 0;
}
