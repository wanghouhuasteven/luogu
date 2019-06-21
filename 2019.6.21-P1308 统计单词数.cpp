#include<bits/stdc++.h>
using namespace std;

string pat;
int pat_length,macro_count=0,first,not_occupied=1;

bool judge(string,int);

int main()
{
    string src;
    cin >> pat;
    pat_length = pat.length();
    getline(cin,src);
    string splited;
    int mcount=0,icount=0;
    for(int i=0;i<src.length();i++)
    {
        if(src[i] == ' ')
        {
            mcount = 0;
            judge(splited,icount);
            icount++;
            
        }
        if(src[i] < 'a') src[i] += ('a' - 'A');
        splited[mcount] = src[i];
        mcount++;
    }
    if(macro_count)
        cout << macro_count << first;
    else
        cout << -1;
    return 0;
}

bool judge(string current,int current_index)
{
    int result;
    if(current.length() == pat_length)
    {
        result = 1;
        for(int i=0;i<pat_length;i++)
            if(pat[i] != current[i])
            {
                result = 0;
                break;
            }
    }
    else
        result = 0;
    if(result == 1 && not_occupied)
    {
        not_occupied = 0;
        first = current_index;
    }
    return result;
}
