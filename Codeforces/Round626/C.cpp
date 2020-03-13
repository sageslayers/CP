#include <bits/stdc++.h>

using namespace std ; 

int main () { 
	int  t ; 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ;
	cin >> t ;  
	stack <char> s ; 
	char c; 
	string str ; 
	cin >> str ; 
	for ( int i = 0 ; i < str.size() ; i ++ )  {
		//cout << "$" << endl;
		if ( !s.empty()) {
		if( s.top() == '(' && str[i] == ')')
			s.pop();
		else
			s.push(str[i]);
			
	}
	else {
		s.push(str[i]);
	} 
	}
	 while (!s.empty()) { 
       cout << s.top() << endl ; 
        s.pop(); 
    } 

    return 0; 
	
}

