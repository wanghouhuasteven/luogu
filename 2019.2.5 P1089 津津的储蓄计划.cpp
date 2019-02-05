#include <bits/stdc++.h>

int main()
{
    
    int preval;
    int conv = 0;
    int bank = 0;
    int tobank;
    for(int i=0;i<12;i++)
    {
        std::cin>>preval;
        if(300 - preval + conv >= 100)
        {
            tobank = 300-preval+conv-((300-preval+conv)%100 + 100);
            conv = conv - tobank;
            bank = bank + tobank;
        }
        if(300 - preval + conv < 0) 
        {
            std::cout<<i + 1;
            return 0;
        }
    }
    std::cout<<bank * 1.2;
    return 0;
}
