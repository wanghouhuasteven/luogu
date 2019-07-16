#include<bits/stdc++.h>
using namespace std;

//int m(int[]);

int judge(int);

int main()
{
    int n = 64; //ASCII位与字母表位之差
    string a,b,c,d;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    getline(cin,d);
    int alphabet[30] = {0};
    for(int i=0;i<(int)a.length();i++) if(judge(a[i])) alphabet[a[i]-n]++;
    for(int i=0;i<(int)b.length();i++) if(judge(b[i])) alphabet[b[i]-n]++;
    for(int i=0;i<(int)c.length();i++) if(judge(c[i])) alphabet[c[i]-n]++;
    for(int i=0;i<(int)d.length();i++) if(judge(d[i])) alphabet[d[i]-n]++;
    int max_height;
    max_height = *max_element(alphabet+1,alphabet+26);
    int forespace_flag;
    for(int i=max_height;i>=1;i--)
    {
        for(int j=1;j<=26;j++)
        {
            forespace_flag = j - 1;
            if(alphabet[j] >= i && forespace_flag) cout << " *";
            else if(alphabet[j] >= i)
            {
                cout << "*";
                forespace_flag = 1;
            }
            else if(forespace_flag) cout << "  ";
            else cout << " ";
        }
        cout << endl;
    }
    char current;
    for(int i=65;i<90;i++)
    {
        current = i;
        cout << current << " ";
    }
    cout << 'Z';
    return 0;
}

/*
int m(int input[30])
{
    int current_max_value,current_max_index;
    current_max_value = input[1];
    for(int i=2;i<=26;i++)
    {
        if(input[i] > current_max_value)
        {
            current_max_value = input[i];
            current_max_index = i;
        }
    }
    return current_max_index;
}
*/

int judge(int input)
{
    return (input >= 65 && input <= 90);
}
