#include<bits/stdc++.h>

using namespace std ;

int main () {
	deque<int> dq ; 
	int q; 
	cin >> q ;
	bool reversed = false ;
	while(q--){
		string s ; 
		cin >> s;  
		if ( s == "add" ) {
			int x , y ; 
			cin >> x >> y; 
			if(!reversed){
				while(y--)
					dq.push_back(x);
			}
			else {
				while(y--)
					dq.push_front(x);
			}
			cout << dq.size() << endl ;
		}
		else if ( s == "del" ){
			int y ; 
			cin >> y; 
			if(!reversed ) {
				cout << dq.front() << endl ;
				while (y--){
					dq.pop_front();
				}
			}
			else {
				cout << dq.back() << endl ;
				while (y--){
					dq.pop_back();
				}
			}
		}
		else {
			reversed = !reversed ;
		}
	}
	

}
