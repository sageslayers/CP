#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); ++i)

typedef long long li;

const int N = 300 * 1000 + 13;

int n;
li a[N], b[N];

void solve() {
	scanf("%d", &n);
	forn(i, n) scanf("%lld%lld", &a[i], &b[i]);
	
	li ans = 0, mn = 1e18;
	forn(i, n) {
		int ni = (i + 1) % n;
		li val = min(a[ni], b[i]);
		cout << "NI : " << ni << endl ; 
		cout << "MIN(a[ni],b[i] : " << "(" << a[ni] << "," << b[i] << ")" << endl;  
		cout << "Val : " << val << endl; 
		cout << "Current Ans : " <<  ans << endl; 
		ans += a[ni] - val;
		cout << "After Ans + a[ni] - val : " << ans << endl ; 
		cout << "Current MN : " << mn << endl  ; 
		mn = min(mn, val);
		cout << "MN After min (mn,val) " << mn << endl ; 
		
	}
	ans += mn;
	printf("%lld\n", ans);
}

int main() {
	int T;
	scanf("%d", &T);
	forn(i, T)
		solve();
}
