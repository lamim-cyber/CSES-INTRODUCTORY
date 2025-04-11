#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int>v(n-1);

    for(int i=0; i<n-1; i++)
    {
        cin>> v[i];
    }

    sort(v.begin(), v.end());

   if(v[0]!=1)
   {
       cout<< "1"<< endl;
       return 0;
   }

   if(v[n-2]!=n)
   {
       cout<< n<< endl;
       return 0;
   }

    for(int i=0; i<n-2; i++)
    {
        if(v[i]+1!=v[i+1])
        {
          cout<< v[i]+1<< endl;
          return 0;
        }
    }
}

