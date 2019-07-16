#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int carpet[10005][5];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<4;j++) cin >> carpet[i][j];
    }
    int x,y;
    cin >> x >> y;
    int no = -1;
    int current_a,current_b,current_g,current_k;
    for(int i=n;i>=1;i--)
    {
        current_a = carpet[i][0];
        current_b = carpet[i][1];
        current_g = carpet[i][2];
        current_k = carpet[i][3];
        if(current_a <= x && current_a+current_g >= x && current_b <= y && current_b + current_k >= y)
        {
            no = i;
            break;
        }
        
    }
    cout << no;
    return 0;
}
