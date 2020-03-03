#include <iostream>
 
#define MOD 1000000007
 
typedef long long ll;
using namespace std; 
ll f(ll n) {
    ll sum = 0;
    for (ll i=1; i<=n; ++i) {
        ll a;
        std::cin >> a;
        sum += ( 2 * i - n - 1) * a;
        cout << sum << endl ;
        sum %= MOD;
    }
    return sum;
}
 
int main() {
    ll n, m;
    std::cin >> n >> m;
    std::cout << (f(n) * f(m)) % MOD << std::endl;
    return 0;
}
