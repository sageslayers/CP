#include<bits/stdc++.h>

using namespace std ;

int main() {
	int q;  
	cin >> q ;
	deque<string> que;  
	while (q-- ) {
		int t; 
		string s; 
		cin >> t  ;
		if ( t== 1 || t == 2 )
			cin >> s; 
		if ( t == 1 )
			que.push_front(s);
		if(t==2)
			que.push_back(s);
		if(t==3){
			cout << que.front() << endl ; 
			que.pop_front();
		}
		if(t==4){
			cout << que.back() << endl ; 
			que.pop_back();
		}
	}
	
}

