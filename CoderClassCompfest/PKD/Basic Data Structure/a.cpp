#include<bits/stdc++.h>

using namespace std ;

int main() {
	int q;  
	cin >> q ;
	queue<string> que;  
	while (q-- ) {
		int t; 
		string s; 
		cin >> t  ;
		if ( t== 1 )
			cin >> s; 
		if ( t == 1 )
			que.push(s);
		else{
			cout << que.front() << endl ; 
			que.pop();
		}
	}
	
}
