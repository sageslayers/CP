#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define MOD 1000000007
int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  ll a , b;
  cin >> a >> b;
  if( a == b ) {
	  cout << (a%MOD + b %MOD ) % MOD << endl ;
	  exit(0);
  }
  else {
  a = a % MOD;
  b = b % MOD;
  ll answer = ((b-a+1)/2 * (a + b)) % MOD;
  cout << answer << "\n";
  return 0;
}
}
