#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long *list = (long long *)malloc(8 * n + 64);
    for(int i=0;i<n;i++) cin >> list[i];
    sort(list,list+n);
    for(int i=0;i<n;i++) cout << list[i] << " ";
    return 0;
}
