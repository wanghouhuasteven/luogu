#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int current;
    int flags[1005] = {0};
    queue<int> series;
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        cin >> current;
        if(!flags[current])
        {
            count++;
            flags[current] = 1;
            if(series.size() == m)
            {
                flags[series.front()] = 0;
                series.pop();
            }
            series.push(current);
        }
    }
    cout << count;
    return 0;
}
