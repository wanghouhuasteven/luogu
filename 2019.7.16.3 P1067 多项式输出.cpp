#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *coeff = (int *)malloc(n * 4 + 32);
    for(int i=n;i>=0;i--) cin >> coeff[i];
    if(coeff[n] == 1) cout << "x^" << n;
    else if(coeff[n] == -1) cout << "-x^" << n;
    else cout << coeff[n] << "x^" << n;
    for(int i=n-1;i>1;i--)
    {
        if(coeff[i] > 1) cout << "+" << coeff[i] << "x^" << i;
        else if(coeff[i] == 1) cout << "+x^" << i;
        else if(coeff[i] < -1) cout << coeff[i] << "x^" << i;
        else if(coeff[i] == -1) cout << "-x^" << i;
    }
    if(coeff[1] > 1) cout << "+" << coeff[1] << "x";
    else if(coeff[1] == 1) cout << "+x";
    else if(coeff[1] < -1) cout << coeff[1] << "x";
    else if(coeff[1] == -1) cout << "-x";
    if(coeff[0] > 0) cout << "+" << coeff[0];
    else if(coeff[0] < 0) cout << coeff[0];
    return 0;
}
