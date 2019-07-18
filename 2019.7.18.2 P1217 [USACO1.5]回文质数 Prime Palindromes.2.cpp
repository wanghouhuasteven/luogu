#include<bits/stdc++.h>
using namespace std;

bool palindrome(int);
bool prime(int);

int main()
{
    int a,b;
    cin >> a >> b;
    int endl_flag = 0;
    for(int i=a;i<=b;i++)
    {
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
	for(int i=2;i<=sqrt(a);++i)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
