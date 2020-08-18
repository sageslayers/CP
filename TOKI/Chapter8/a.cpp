#include<bits/stdc++.h>

using namespace std ;

int main () {
	deque<int> dq ; 
	int q; 
	cin >> q ;
	while(q--){
		string s ;
		int x ; 
		cin >> s ;
		if ( s == "push_back" ){
			cin >> x; 
			dq.push_back(x); 
		}
		else if ( s==  "push_front" ){
			cin >> x;
			dq.push_front(x) ;
		}
		else if ( s == "pop_back" )
			dq.pop_back() ;
		else 
			dq.pop_front() ; 
			
		
	}
	for( auto & r : dq ) 
		cout << r << endl ; 
	
}
