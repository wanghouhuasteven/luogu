#include <bits/stdc++.h>
using namespace std;

int main()
{
    int heights[10];
    int highest;
    int pickable(0);
    for(int i=0;i<10;i++) cin >> heights[i];
    cin >> highest;
    int temp;
    for(int i=0;i<10;i++)
    {
        temp = heights[i];
        if(temp <= highest + 30)
        {
            pickable += 1;
        }
    }
    cout << pickable;
    return 0;
}
