#include<bits/stdc++.h>
using namespace std;

bool palindrome(int);
bool prime(int);

int main()
{
    int a,b;
    cin >> a >> b;
    int results[100000005];
    int count = 0;
    for(int i=a;i<=b;i++)
    {
        if(palindrome(i) && prime(i))
        {
            results[++count] = i;
        }
    }
    for(int i=1;i<count;i++)
    {
        cout << results[i] << endl;
    }
    cout << results[count];
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
