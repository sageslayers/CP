#include<bits/stdc++.h>

using namespace std ;
bool comparator ( const pair<int,int> a , const pair<int,int> b ) {
	return a.first > b.first ;
}
int main () {
	int n , k ; 
	cin >> n >> k ; 
	
	vector<pair<int,int>> cntA(100001) ;
	vector<pair<int,int>> cntB(100001) ;
	for(int i = 0 ; i <= 100000 ; i ++ ) {
		cntA[i] = {0,i};
		cntB[i] = {0,i};
	}
	vector<int> a;
	vector<int> b;
	for(int i = 0 ; i < n ; i ++ ) { 
		int x; 
		cin >> x ; 
		cntA[x].first++;
	}
	for(int i = 0 ; i < n ; i ++ ) { 
		int x; 
		cin >> x ; 
		cntB[x].first++;
	}
	sort(cntA.begin(),cntA.end());
	sort(cntB.begin(),cntB.end(),comparator);
	for(int i = 0 ; i <= 100000 ; i ++ ) { 
		for(int j = 0 ; j < cntA[i].first ; j ++ ) {
			a.push_back(cntA[i].second);
		}
	}
	for(int i = 0 ; i <= 100000 ; i ++ ) { 
		for(int j = 0 ; j < cntB[i].first ; j ++ ) {
			b.push_back(cntB[i].second);
		}
	}
	int cnt = 0 ;
	for(int i = 0 ; i< n ; i ++ ) {
		if ( a[i] == b[i] )
			cnt++;
	}

	if ( cnt <= k )
		cout << "Ya" << endl ;
	else
		cout << "Tidak" << endl ;
}
