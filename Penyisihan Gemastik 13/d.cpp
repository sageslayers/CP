#include<bits/stdc++.h>
using namespace std ;
long long best = 0 ;
long long visited[100001]; 
vector<int> w ; 
vector<int> adj[100001];
long long dfs (int n ) {
   
    if ( visited[n] != -1 ) {
        return visited[n];
    }else {
        long long cnt = w[n] ;
        long long total = w[n];
        for( auto & r : adj[n]) {
            long long c = total ; 
            c += dfs(r);
            cnt = max(cnt,c);
        }
        visited[n] = cnt ;
        best = max(best,cnt);
        return visited[n];
    }
   
}
int main ( ) {

memset(visited,-1,sizeof(visited));

int n , m ; 
cin >> n >> m ; 

for(int i = 0 ; i < n ; i ++ ) {
    int W ;
    cin >> W ; 
    w.push_back(W);
}
for(int i = 0 ; i < m ; i ++ ) {
    int x,  y ; 
    cin >> x >> y ; 
    adj[x].push_back(y);
}
for(int i = 0 ; i < n ; i ++) {
    if( visited[i] == -1 ){
        dfs(i);
    }
}

cout << best << endl ;
}