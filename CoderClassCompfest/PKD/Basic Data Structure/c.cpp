#include<bits/stdc++.h>

using namespace std ;

int main() {
	int t; 
	cin >> t ; 
	while (t--) {
		string str ; 
		cin >> str; 
		stack<char> s ; 
		for(int i = 0 ; i < str.size() ; i ++ ) {
		if( !s.empty()){
			if(s.top() == '(' && str[i] == ')' ){
				s.pop();
			}
			else if(s.top() == '[' && str[i] == ']' ) {
				s.pop();
			}
			else {
				s.push(str[i]);
			}
		}
		else {
			s.push(str[i]);
		}
		}
		if( s.empty() )
			cout << "ya" << endl ;
		else
			cout <<"tidak" << endl ; 
	}
	
}


