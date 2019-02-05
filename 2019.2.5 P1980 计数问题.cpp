// luogu-judger-enable-o2
#include <bits/stdc++.h>

int judge(long int n,int x)
{
    int result = 0;
    while(n >= 1)
    {
        if(n%10 == x)
        {
            result += 1;
        }
        n = n/10;
    }
    return result;
}

int main()
{
    long int n;
    int x;
    int num = 0;
    std::cin>>n>>x;
    for(long int i=1;i<=n;i++)
    {
        num += judge(i,x);
    }
    std::cout<<num;
    return 0;
}
/*
拾到篮篮都是菜——一点积累

1.sprintf(str,"%d",n);
在这里sprintf()函数可以将long int n转化为string str。

2.for(int i=0;str[i];i++)
str[i]很机智，因为当字符串下一位为'/0'时布尔判断为假。
*/
