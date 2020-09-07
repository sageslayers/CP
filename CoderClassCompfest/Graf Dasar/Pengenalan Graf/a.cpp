#include<bits/stdc++.h>

using namespace std ;

int main () { 
int n , q , last , start; 
cin >> n >> q ; 
char xx ;
vector<int> adj[n+1] ; 
while(q--) { 
	int x , y ; 
	cin >> x >> y ; 
	adj[x].push_back(y);
	adj[y].push_back(x);
}
int ganjil = 0 ; 
for(int i = 1 ; i <= n ; i ++ ) {
	int cnt = 0 ; 
	for(auto & r : adj[i] ) 
			cnt++;
		if ( cnt % 2 == 1 )
			ganjil++ ; 
		
	}
if (ganjil == 0 ) {
	cout << "Tipe A" << endl ; 
}
else if ( ganjil > 0 && ganjil <= 2 ) 
	cout << "Tipe B" << endl ; 
else
	cout << "Tipe C" << endl ; 

}

