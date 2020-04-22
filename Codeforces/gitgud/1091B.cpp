#include<bits/stdc++.h>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define mii map<int,int> ; 
using namespace std ;

int main () { 

ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
map<pair<int,int>,int> mp ; 
int n ;
vector<pair<int,int>> ob ; 
vector<pair<int,int>> clue ; 
 
cin >> n ; 
for( int i = 0 ; i < n ; i ++ ) 
	{
		int x , y ; 
		cin >> x >> y;  
		ob.push_back({x,y});
	}
for (int i = 0 ; i < n ; i ++ ) {
	int x , y ; 
	cin >> x >> y ;
	clue.push_back({x,y});
}
for( int i = 0 ; i < n ; i ++ ) { 
	for ( int j = 0 ; j < n ; j ++ )  {
		mp[{ob[i].first + clue[j].first , ob[i].second+ clue[j].second}] ++ ; 
	}
}
for( auto & r : mp ) {
	if ( r.second == n ) {
		cout << r.first.first << " " << r.first.second << endl ; 
		break; }
}

}
