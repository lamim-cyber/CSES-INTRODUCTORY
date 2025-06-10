#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    int maxi=-1, a=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])
            a++;
        else
        {
            if(maxi<a)
                maxi=a;
            a=0;
        }
    }

    if(maxi<a)
        maxi=a;
    
    cout<< maxi+1<< endl;
}
