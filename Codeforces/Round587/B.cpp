#include <bits/stdc++.h>

using namespace std ;  
bool comp ( const pair<int,int> & a , const pair <int,int> & b ){
	return a.first > b.first ; 
}
int main ( ) { 
	int n ; 
	cin >> n ; 
	vector<pair<int,int>> vect ; 
	for (int i = 0 ; i < n ; i ++ )	{
		int x;  
		cin >> x ; 
		vect.push_back(make_pair(x,i+1));
	}
	sort(vect.begin(),vect.end(),comp);
	int x = 1;  
	int sum = 1 ; 
	for ( int i = 1 ; i < n ; i ++ ) 
		sum += i*vect[i].first+1 ; 
	cout << sum << endl ; 
	for ( auto & r : vect ) 
		cout << r.second << " " ;
		cout << endl ; 
	
	
}
