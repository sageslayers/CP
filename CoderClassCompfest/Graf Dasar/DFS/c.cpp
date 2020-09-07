#include<bits/stdc++.h>

using namespace std ; 
int bicolor[100001] ;
vector<int> adj[100001] ; 
bool ganjil = false ; 

void dfs(int n ,int color ) { 
	//cout << n << " Color : " << color << endl ; 
	bicolor[n] = color ; 
	for(auto & r : adj[n] ) {
		if( bicolor[r] == 0 ){
			if(color == 1 )
				dfs(r,2);
			else
				dfs(r,1);
		}
		else {
			if(color == 1 && bicolor[r] == 1 )
				ganjil = true ; 
			else if ( color == 2 && bicolor[r] == 2 )
				ganjil = true ;
		}
	}
}
int main() { 
	int n , m ; 
	cin >> n >> m ; 
	memset(bicolor,0,sizeof(bicolor));
	while(m--){
		int x ,y ;
		cin >> x >> y; 
		adj[x].push_back(y);
		adj[y].push_back(x);
		
		
	}
	for(int i = 1 ; i<= n ; i ++ ) { 
			if(bicolor[i] == 0 ) {
				dfs(i,1);
			}
		}
	
	if (ganjil ) 
		cout << "TIDAK" << endl ;
	else
		cout << "YA" << endl ;
	
}
