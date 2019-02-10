// luogu-judger-enable-o2
#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    int result = 0;
    for(int i=0;i<3;i++)
    {
        int amount;
        int price;
        std::cin >> amount >> price;
        int sumprice = ceil(n*1.0 / amount) * price;
        if(sumprice < result && result != 0) result = sumprice;
        if(result == 0) result = sumprice;
    }
    std::cout << result;
    return 0;
}
