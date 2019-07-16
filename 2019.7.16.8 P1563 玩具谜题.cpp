#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int p[100005];
    string j[100005];
    int pointer = 1;
    for(int i=1;i<=n;i++) cin >> p[i] >> j[i];
    int cp,cn;
    for(int i=1;i<=m;i++)
    {
        cin >> cp >> cn;
        cn %= n;
        if((p[pointer] && cp) || (!(p[pointer]) && !(cp))) pointer -= cn;
        else pointer += cn;
        if(pointer < 1) pointer += n;
        if(pointer > n) pointer -= n;
    }
    cout << j[pointer];
    return 0;
}
