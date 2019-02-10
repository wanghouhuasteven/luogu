#include <bits/stdc++.h>

int main()
{
    int x;
    int day;
    long int n;
    long int last = 0;
    std::cin >> x;
    std::cin >> n;
    for(int i=0;i<n;i++)
    {
        day = (i%7 + x)%7;
        if(day == 6 || day == 0)
        {
            last += 0;
        }
        else
        {
            last += 250;
        }
    }
    std::cout << last;
}
