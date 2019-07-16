#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sa,sb;
    int sera[205],serb[205];
    int a_current,b_current;
    int as = 0;
    int bs = 0;
    int table[5][5] =
    {{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};
    cin >> n >> sa >> sb;
    for(int i=0;i<sa;i++) cin >> sera[i];
    for(int i=0;i<sb;i++) cin >> serb[i];
    for(int i=0;i<n;i++)
    {
        a_current = sera[i%sa];
        b_current = serb[i%sb];
        as += table[a_current][b_current];
        bs += table[b_current][a_current];
    }
    cout << as << " " << bs;
    return 0;
}
