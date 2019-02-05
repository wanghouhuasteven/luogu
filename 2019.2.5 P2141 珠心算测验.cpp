// luogu-judger-enable-o2
//普及-难度
#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) std::cin>>nums[i];
    int sum = 0;
    bool flag;
    for(int i=0;i<n;i++)
    {
       flag = true;
       for(int j=0;j<n;j++)
       {
           if(j != i)
           {
               for(int k=j + 1;k<n;k++)
               {
                   if(k != i && nums[j]+nums[k] == nums[i] && flag)
                   {
                       sum += 1;
                       flag = false;
                   }
               }
           }
       }
    }
    std::cout<<sum;
    return 0;
}
/*
此题有坑，须注意。

其中有多少个数，恰好等于集合中另外两个（不同的）数之和？ 注意，加数和被加数必须是集合中的两个不同的数。
这里的有一个很坑的地方: 如有一个数是7，1+,6和6+1算重复，1+6和3+4也算是重复的情况！
——洛谷题解
*/
