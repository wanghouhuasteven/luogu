#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int num = m * 1.5;
    int s[10005],k[5005];
    for(int i=1;i<=n;i++)
    {
        cin >> k[i] >> s[k[i]];
    }
    for(int i=1;i<=n;i++)
    {
        if(s[k[i]] > s[k[i+1]]) swap(k[i],k[i+1]);
    }
    int line = s[k[num]];
    int i = num + 1;
    int except_last_flag = 0;
    int result;
    while(s[k[i]] == line)
    {
        except_last_flag = 1;
        i++;
    }
    if(except_last_flag)
    {
        result = i;
    }
    else
    {
        result = num;
    }
    cout << s[k[num]] << " " << result;
    for(int i=1;i<=result;i++)
    {
        cout << endl << k[i] << " " << s[k[i]];
    }
    return 0;
}
