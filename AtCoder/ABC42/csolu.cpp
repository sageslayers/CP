#include <iostream>
#include "cstdio"
#include <string>
#include <vector>
 
#define NMAX 100
using namespace std;
 
int main(){
	long long N,K,ans,D[10] = {};
	cin >> N >> K;
	for (int i = 0; i < K; ++i)
	{
		int a;
		cin >> a;
		D[a]++;
	}
	ans = N;
	while(true){
		
		int s = 1,ss = ans;
		
		while(ss){
		//	cout << ss << " "  << ans << endl ; 
			if(D[ss%10] == 1){
				s = 0;
				break;
			}
			ss /= 10;
		}
		if(s == 1){
			cout << ans <<"\n";
			break;
		}
		ans++;
	}
	return 0;
}
