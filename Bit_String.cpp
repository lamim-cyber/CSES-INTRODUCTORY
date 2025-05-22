#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
  int n;
  cin>> n;
  long long sum=1;
  for(int i=0; i<n; i++)
  {
      sum= (sum*2)%mod;
  }
  cout<< sum<< endl;
}
