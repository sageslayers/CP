#include<bits/stdc++.h>

using namespace std ;


int main () {
	int n , m ; 
	cin >> n >> m ;
	vector<pair<int,int>>vect ; 
	for(int i = 0 ; i  < n ; i ++ ) {
		int l , r ; 
		cin >> l >> r; 
		vect.push_back({l,r});
		
	}
	sort(vect.begin(),vect.end());
	int last = 0 ;
	int cnt = 0 ; 
	int sta = 0 ;
	int newsta ;  
	int newlast ; 
	for(int i = 0 ; i < n ; i++ ){
		//cout << sta << " " << last << endl ;
		if ( vect[i].first > last + 1 ) {
			/*cout << "END" << endl ;
			cout << i << " " << vect[i].first << endl ; 
			cout << "LAST : " << last << endl ;
			cout << "HALO" << endl ;*/
			cout << -1 << endl;
			exit(0);
		}
		newlast = 0 ;
		if ( last == m )
			break ; 
		if(vect[i].first == sta ) {
			//cout << "CASE 1 " << endl ; 
			last = max(last,vect[i].second);
		}
		else if ( vect[i].first > sta && vect[i].first <= last ) { 
		//	cout << "CASE 2 " << endl ;
			int j = i ; 
			while ( vect[j].first > sta && vect[j].first <= last && j < n ) {
				/*
				cout << "i# : " << j << endl ;
			cout << "R.First : " << vect[j].first << endl ;
			cout << "R.Second : " << vect[j].second << endl ; 
			cout << "Start : " << sta << endl ; 
			cout << "Last : " << last << endl ;
			cout << "Count : " << cnt << endl ;
			cout << endl ;
			*/
				if( vect[j].second > newlast ) {
					newsta = vect[j].first ;
					newlast = vect[j].second ; 
				}
				j++ ;
			}
			//cout << "KELAR" << endl ;
			i = j-1; 
			sta = newsta ; 
			last = newlast ;
			cnt++ ;  
			
			if ( i == n )
				break ; 
			
		}
		else if (vect[i].first > last){ 
			//cout <<" CASE 3 " << endl ;
			sta = vect[i].first ; 
			last = vect[i].second ; 
			cnt++ ; 
		}
			/*
			cout << "i : " << i << endl ;
			cout << "R.First : " << vect[i].first << endl ;
			cout << "R.Second : " << vect[i].second << endl ; 
			cout << "Start : " << sta << endl ; 
			cout << "Last : " << last << endl ;
			cout << "Count : " << cnt << endl ;
			cout << endl ;
			*/
	}
	//cout << "VERY LAST :" << last << endl ;
	if ( last != m )
		cout << -1 << endl ;
	else 
		cout << cnt << endl ;
	
}
