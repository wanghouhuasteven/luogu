#include<bits/stdc++.h>
#define SP " "
using namespace std;

//深度优先搜索

int a[10],p[10];

void dfs(int k)
{
    if(k==10)
    {
        int a1 = a[1] * 100 + a[2] * 10 + a[3];
        int a2 = a[4] * 100 + a[5] * 10 + a[6];
        int a3 = a[7] * 100 + a[8] * 10 + a[9];
        if(a2 == 2 * a1 && a3 == 3 * a1) cout << a1 << SP << a2 << SP << a3 << endl;
    }
    
    for(int i=1;i<=9;i++)
    {
        if(p[i] == 0)
        {
            a[k] = i;
            p[i] = 1;
            dfs(k + 1);
            p[i] = 0;
        }
    }
}

int main()
{
    dfs(1);
    return 0;
}
