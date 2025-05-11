#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        long long  row, column;
        cin>> row>> column;

        if(row==column)
        {
            long long num=row*row;
            row--;
            num=(num+(1+(row*row)))/2;
            cout<< num<< endl;
            continue;
        }
        if(row<column)
        {
            long long  n=column;
            if(n%2==0)
            {
                column--;
                long long k=(column*column);
                cout<< k+row<< endl;
            }
            else
            {
                long long k=column*column;
                cout<< k-(row-1)<< endl;
            }
            continue;
        }
        if(row>column)
        {
            long long  n=row;
            if(n%2==0)
            {
                long  k=row*row;
                cout<< k-(column-1)<< endl;
            }
            else
            {
                row--;
                long  k=(row*row);
                cout<< k+column<< endl;
            }
            continue;
        }
    }
}
