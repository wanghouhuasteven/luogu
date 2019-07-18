#include<bits/stdc++.h>
using namespace std;

bool palindrome(int);
bool prime(int);

int main()
{
    int a,b;
    cin >> a >> b;
    int endl_flag = 0;
    if(!a%2) a++;
    for(int i=a;i<=b;i++)
    {
        if(i>11&&i<=99) i = 101;
        else if(i>=1000&&i<=9999) i = 10001;
        else if(i>=100000&&i<=999999) i = 1000001;
        else if(i>=10000000&&i<=99999999) i = 100000001;
        if(i > b) break;
        if(palindrome(i) && prime(i))
        {
            if(endl_flag) cout << endl << i;
            else
            {
                endl_flag = 1;
                cout << i;
            }
        }
    }
    return 0;
}

bool palindrome(int a)
{
    if(a < 10) return 1;
    int b;
    int rev = 0;
    b = a;
    while(b)
    {
        rev *= 10;
        rev += b%10;
        b /= 10;
    }
    return rev == a;
}

bool prime(int a)
{
    if(a==0 || a==1) return 0;
    for(int i=2;i<=sqrt(a);++i) if(a%i==0) return 0;
    return 1;
}
