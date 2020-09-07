#include<bits/stdc++.h>

using namespace std ;
vector<pair<int,int>> adj[100001];
pair<long long,bool> memo[100001] ; 
long long ans ; 
int dest ;
pair<long long,bool> dfs(int n,int cost){
	if( memo[n].first != 0 )
		return {memo[n].first,memo[n].second} ;
	long long best = 0 ;
	bool benar = false ; 
	if( n == dest ){
		benar = true ; 
	}else {
	for(auto & r : adj[n] ) { 
		pair<long long,bool> temp = {0,true} ; 
		temp = dfs(r.first,r.second);
		if(temp.second){
			best = max(temp.first,best);
			benar = true ;
		}
	}
	}
	
	if( benar ){
		memo[n].first = best ;
		best += cost ; 
	}else
	{
		best = -1 ;
		memo[n].first = best ;
	}
	memo[n].second = benar ;  
	return {best,benar};
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
memset(memo,0,sizeof(memo));
int  q ; 
cin >> dest >> q ; 

while(q--) {
	int x , y , t ; 
	cin >> x >> y >> t ; 
	adj[x].push_back({y,t});
}
dfs(1,0);
