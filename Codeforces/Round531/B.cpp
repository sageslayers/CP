#include<bits/stdc++.h>

using namespace std ;
bool comparator (const pair<int,int>a , const pair<int,int> b ) {
	return b.second > a.second ; 
}
int main ( ) { 
	int n , k ; 
	cin >> n ; 
	cin >> k ; 
	vector<pair<int,int>> vect;
	for(int i = 0 ; i < n ; i ++ ) {
		int x; 
		 cin >> x;  
		 vect.push_back(make_pair(x,i));  
	}
	 
	int banyak = 1 ; 
	if ( n == 1 ){
		if( k > 1 )
		cout << "NO" << endl ; 
		else
		cout << "YES" << endl << 1 << endl ; 
		return  0 ; 
	}
	sort(vect.begin(),vect.end());
	//for ( auto & r : vect )
		//cout << r.first << " " ; 
		
	for(int i = 1 ; i < n ; i ++ ) { 
		if ( vect[i].first == vect[i-1].first ) {
			banyak++;
		}
		else {
			if ( banyak > k ){
				cout <<"NO"<<endl ; 
				return 0 ;
			}
			banyak = 1; 
		}
		if ( banyak > k ){
				cout <<"NO"<<endl ; 
				return 0 ;
			}
	}
	int cnt = 1;  
	for ( int i = 0 ; i < n ; i ++ )  {
		if( cnt == k+1) {
			cnt = 1 ; 
		}
		vect[i].first = cnt++ ; 
	}

	sort (vect.begin(),vect.end(),comparator);
	cout << "YES" << endl ; 
	for ( auto & r : vect )
		cout << r.first << " " ; 
}
