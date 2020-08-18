
#include<bits/stdc++.h>

using namespace std ;

int main() { 
	
	int n , q ; 
	cin >> n >> q; 
	vector<int> badak ;
	for(int i = 0 ; i < n ; i ++ ) {
		int x; 
		cin >> x ; 
		badak.push_back(x) ; 
	}
	sort(badak.begin(),badak.end());
	while(q--){
		int x ; 
		cin >> x;
		cout << badak[x-1] << endl ; 
	}
}


