#include <bits/stdc++.h>
using namespace std;
#define MOD 100000037

unsigned long long powM(unsigned long long a, unsigned long long b)
{
  // a%=MOD;
  unsigned long long res = 1;
  while(b)
  {
    if(b%2)
      res = (res*a) % MOD;
    a = (a*a)%MOD;
    b/=2;
  }
  return res;
}

unsigned long long ans(unsigned long long a[], unsigned long long x, unsigned long long y)
{
  if(y==1)
    return 1;
  return powM(a[x],ans(a,x+1,y-1));
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  int n;
  cin >> n;
  int i;
  unsigned long long a[n];
  for(i = 0;i<n;++i)
  {
    cin >> a[i];
  }
  cout << ans(a,0,n) << endl;
  return 0;
}