#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cards[105];
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        cin >> cards[i];
        sum += cards[i];
    }
    int avg = sum / n;
    int moves = 0;
    // rest;
    //int j;
    for(int i=1;i<n;i++)
    {
        if(cards[i] - avg)
        {
            #if 0
            if(cards[i] < avg)
            {
                /*
                rest = avg - cards[i];
                j = i + 1;
                while(rest)
                {
                    if(rest > cards[j])
                    {
                        rest -= cards[j];
                        cards[j] = 0;
                    }
                    else
                    {
                        cards[j] -= rest;
                        rest = 0;
                    }
                moves++;
                j++;
                }
                */
                rest = avg - cards[i];
                j = i + 1;
                while(rest)
                {
                    if(cards[j] > avg)
                    {
                        if(rest > cards[j] - avg)
                        {
                            rest -= cards[j] - avg;
                            cards[j] = avg;
                        }
                        else
                        {
                            cards[j] -= rest;
                            rest = 0;
                        }
                        moves++;
                    }
                    j++;
                }
            }
            else if(cards[i] > avg)
            {
                //cards[i + 1] += cards[i] - avg;
                rest = cards[i] - avg;
                j = i + 1;
                while(rest)
                {
                    if(cards[j] < avg)
                    {
                        if(rest > avg - cards[j])
                        {
                            rest -= avg - cards[j];
                            cards[j] = avg;
                        }
                        else
                        {
                            cards[j] += rest;
                            rest = 0;
                        }
                    moves++;
                    }
                j++;
                }
                //moves++;
            }
            #endif
            cards[i + 1] += cards[i] - avg;
            moves++;
        }
    }
    cout << moves;
    return 0;
}
