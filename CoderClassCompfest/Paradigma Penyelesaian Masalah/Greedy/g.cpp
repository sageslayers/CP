#include<bits/stdc++.h>

using namespace std ;
bool comparator ( const pair<int,int> &a , const pair<int,int> & b ) { 
	return double(a.second)/a.first > double(b.second) / b.first ; 
}

int main() { 
	
	int n , w ; 
	cin >> n >> w ; 
	vector<int> W ; 
	vector<int> V ; 
	vector<pair<int,int>>pw ;
	for(int i= 0 ; i < n ; i ++ ) {
		int x ;
		cin >> x ;
		W.push_back(x); 
	}
	for(int i= 0 ; i < n ; i ++ ) {
		int x ;
		cin >> x ;
		V.push_back(x); 
	}
	for(int i= 0 ; i < n ; i ++ ) {
		pw.push_back({W[i],V[i]}); 
	}

	sort(pw.begin(),pw.end(),comparator);
	double ans = 0 ;
	for(int i = 0 ; i < n ; i ++ ) {
		
		if ( w == 0 )
			break ; 
		int sz = min(pw[i].first,w);
		w-= sz ; 
		if ( sz == pw[i].first )
			ans+= pw[i].second ; 
		else{
			//cout << "##"<< double(sz) / pw[i].second << endl ;
			ans+= double(sz) * double(pw[i].second) / pw[i].first    ;
		}
		//cout << pw[i].first << " " << pw[i].second << " " << sz << endl ;
	}
	cout << setprecision(9) << ans << endl ; 
}
