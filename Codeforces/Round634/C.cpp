#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t;  
cin >> t ; 
while (t-- ) { 
	int n ; 
	cin >> n ; 
	vector<int>vect(n) ; 
	for(int i = 0 ; i < n ; i++ ) 
		cin >> vect[i] ; 
	sort(vect.begin(),vect.end()) ;
	int angka = -1 ; 
	int bestmax = -1 ;
	int distinct = 0 ; 
	map<int,int> mp ; 
	for( int i = 0 ; i < n ; i ++ )  {
		mp[vect[i]]++ ; 
	}
	for( auto & r : mp ) {
		//cout << r.first << " " << r.second << endl ; 
		if ( r.second > bestmax ){ 
			bestmax = r.second ;
			angka = r.first ; 
		} 
	} 
	distinct = mp.size() ; 
	
	
	int hasil = min(distinct, bestmax-1) ;
	int hasil2 = min (distinct-1,bestmax); 
	cout <<  max(hasil,hasil2) << endl ; 
	
}

}
