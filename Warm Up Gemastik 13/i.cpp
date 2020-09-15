#include<bits/stdc++.h>


using namespace std ;
vector<int> adj[11];
int main () { 
	//fstream file("i.txt");
	int x , y ; 
	cin >> x>>y ;
	 
	
	vector<string> str ; 
	int m ; 
	cin >> m ; 
	string s;  
	cin.ignore();
	while( getline(cin,s)){
		str.push_back(s);
	}
	for(int i = 0 ; i < str.size() ; i ++ ) {
		for(int j = 0 ; j < str[i].size() ; j ++ ){ 
			if( str[i][j] == '1' )
				adj[i].push_back(j/2);
		}
	}
	
	queue<pair<int,int>> q ;
	q.push({x,0});
	int cnt = 0 ; 
	while ( !q.empty() ) {
		
		int v = q.front().first ; 
		int c = q.front().second ;
		//cout << " ## " << v<< " " << c << endl ;
		if ( v == y && c == m ){
			cnt++;
		} 
		q.pop();
		if ( c + 1 <= m ) {
		for( auto & r : adj[v] ){
			q.push({r,c+1});	
		}
	}
		
	}
	cout << cnt << endl ;
	
}
