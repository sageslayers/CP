#include <bits/stdc++.h>

using namespace std ;
int cnt;
long long int pref[100001];
string s; 
void recursive(int l,int r ,long long int sum ){

	if ( r == s.size() ){
		return ;
	}
	else if( l > r ){
		recursive(0,r+1,pref[r+1]);
	}
	else{ 
	
	if(sum == r-l+1)
		cnt++;
		recursive(l+1,r,sum-(int(s[l]) - '0'));
	}
}

int main () { 
	
	int t; 
	cin >> t;
	while  ( t-- ) {
		memset(pref,0,sizeof(pref));
		cnt = 0 ;
		int n;
		cin >> n; 
		cin >> s; 
		for(int i = 0 ; i < s.size() ; i ++ ){
			pref[i] = int(s[i])-48 ;
			
		}
		for(int i = 1 ; i < s.size() ; i ++ ){
			pref[i] = pref[i] + pref[i-1];
		}
	
		recursive(0,0,0+int(s[0]) - '0');
		cout << cnt << endl ;
	}
	
	
	
}
