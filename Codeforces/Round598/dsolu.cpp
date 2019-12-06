#include<bits/stdc++.h>
#define db(x) cerr<<#x<<" = "<<x<<endl;
using namespace std;
char cch[1000006],ch[1000006];
void solve() {
	long long n,k;
	scanf("%I64d%I64d",&n,&k);
	scanf("%s",cch);
	for(int i=n-1; i>=0; --i) {
		ch[i]=cch[n-1-i];
	}
	int tot=0;
	for(int i=n-1; i>=0; --i) {
		//cerr<<i<<' '<<tot<<' '<<k<<endl;
		if(ch[i]=='1') {
			++tot;
			if(i) {
				continue;
			}
			for(int j=n-1; j>=tot; --j) {
				putchar('0');
			}
			for(int j=tot-1; j>=0; --j) {
				putchar('1');
			}
			puts("");
			return;
		} else {
			if(k>tot&&i) {
				k-=tot;
			} else {
				k=min(k,1ll*tot);
				for(int j=n-1; j>i+tot; --j) {
					putchar('0');
				}
				for(int j=i+tot; j>i+k; --j) {
					putchar('1');
				}
				putchar('0');
				for(int j=i+k-1; j>=i; --j) {
					putchar('1');
				}
				for(int j=i-1; j>=0; --j) {
					putchar(ch[j]);
				}
				puts("");
				return;
			}
		}
	}
	return;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		solve();
	}
	return 0;
}
