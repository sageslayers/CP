#include <bits/stdc++.h>
using namespace std ; 

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
#define max_n 200005 
vector<int> adj[max_n]; 
map<pair<int,int>,int> mp ; 

void dfs(int u,int v,int dest ) {
	mp[{u,v}]++ ; 
	
	
}

int t;  
cin >> t; 
while ( t--) {
	
int n , m , a , b,  c ; 
cin >> n >> m >> a >> b >> c ; 
vector<int> price(m); 
for (int i = 0 ; i <  m ; i ++ ) 
	cin >> price[i] ; 
for (int i = 0 ; i < m ; i ++ ) {
	int x ,y ; 
	cin >> x >> y ; 
	adj[x].push_back(y) ; 
	adj[y].push_back(x) ; 
}


}
}
