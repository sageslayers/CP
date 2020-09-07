#include<bits/stdc++.h>

using namespace std ;
vector <pair<int,pair<int,int>>> road ;
int parent[100001] ; 
int depth[100001] ;
 
int find(int x ) { 
	if ( parent[x] == x ) {
		return x ; 
	}
	return find(parent[x]);
}

void unite(int x , int y ) { 
	if ( depth[y] > depth[x] ) { 
		swap(x,y);
	}
	parent[y] = x ; 
	if( depth[x] == depth[y] )
		depth[x]++;
}

int main () { 
	int n , m ; 
	cin >> n >> m ; 
	for(int i = 1 ; i <= 100000 ; i ++ ) {
		parent[i] = i ; 
		depth[i] = 0 ; 
	}
	
	for(int i = 0 ; i < m ; i ++ ) { 
		int a, b , w ; 
		cin >> a >> b >> w ; 
		road.push_back({w,{a,b}});
	}
	sort(road.begin(),road.end());
	int nextI = 0 ; 
	int curM = 0 ; 
	long long curW = 0 ; 
	
	while ( curM < n-1  && nextI < m ) {
		int x = road[nextI].second.first ;
		int y = road[nextI].second.second ;
		int w = road[nextI].first ; 
		x = find(x);
		y = find(y); 
		if (  x != y ) { 
			unite(x,y);
			curW+= w ; 
			curM++;
		}
		nextI++;
	} 
	
	cout << curW << endl ; 
}
