#include<bits/stdc++.h>
#define max_n 500005
using namespace std ;


int CurrentColor = 1 ; 
vector <int> sizez(max_n) ;
vector<int> adj[max_n] ;
vector<int> color(max_n) ; 
void dfs(int CurrentNode,int CurrentColor){
	color[CurrentNode] = CurrentColor ; 
	sizez[CurrentColor]++ ; 
	for ( auto & r : adj[CurrentNode] ) {
		if (color[r] == 0 )
			dfs(r,CurrentColor);
	}
}

int main () { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int n , k ; 
int y ,v, x ; 
cin >> n >>  k ;  

for( int i = 0 ; i < k ;  i ++ )  { 
	cin >> x ; 
if ( x > 1 )  {
	cin >> v;  
	for (int j = 1 ;  j < x ; j ++ )  { 
		cin >> y;  
		adj[v].push_back(y); 
		adj[y].push_back(v); 
	}
}
else {
	for (int i = 0 ; i < x ; i ++ ) {
		cin >> y;  
	}
}
	
} 

for( int i = 1 ; i <= n ; i ++ ) { 
	if( color[i] == 0 ) {
		dfs(i,CurrentColor);
		CurrentColor++ ; 
	}
	
}
for (int i = 1 ; i <= n ; i++ ) 
	cout << sizez[color[i]] << " " ;
	cout << endl ; 



}
