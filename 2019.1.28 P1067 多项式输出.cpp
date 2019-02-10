#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int coeffs[n + 1];
    int coeff;
    int point;
    for(int i=0;i<=n;i++) cin >> coeffs[i];
    for(int i=0;i<=n;i++)
    {
        coeff = coeffs[i];
        point = n-i;
        if(point != 0)
        {
            if(point != n)
            {
                if(coeff == 1)
                {
                    cout << "+x^" << point;
                }
                else if(coeff == -1)
                {
                    cout << "-x^" << point;
                }
                else if(coeff < 0)
                {
                    cout << coeff << "x^" << point;
                }
                else if(coeff > 0)
                {
                    cout << "+" << coeff << "x^" << point;
                }
            }
            else
            {
                if(coeff == 1)
                {
                    cout << "x^" << point;
                }
                else if(coeff == -1)
                {
                    cout << "-x^" << point;
                }
                else if(coeff < 0)
                {
                    cout << coeff << "x^" << point;
                }
                else if(coeff > 0)
                {
                    cout << coeff << "x^" << point;
                }
            }
        }
        else
		{
			if(coeff < 0)
                {
                    cout << coeff;
                }
            else if(coeff > 0)
                {
                    cout << "+" << coeff;
                }
		} 
    }
    return 0;
}
