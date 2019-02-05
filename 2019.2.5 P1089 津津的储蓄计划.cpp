// luogu-judger-enable-o2
#include <bits/stdc++.h>

int main()
{
    
    int preval;
    int conv = 0;
    int bank = 0;
    int tobank;
    int result;
    bool flag = true;
    for(int i=0;i<12;i++)
    {
        std::cin>>preval;
        conv += 300 - preval;
        if(conv >= 100)
        {
            tobank = conv - conv%100;
            conv -= tobank;
            bank += tobank;
        }
        if(conv < 0) 
        {
            conv = 0;
            if(flag) result = -(i + 1);
            flag = false;
        }
    }
    if(flag)
    {
        result = bank * 1.2 + conv;
    }
    std::cout<<result;
    return 0;
}
