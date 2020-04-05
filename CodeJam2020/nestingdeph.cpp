#include <bits/stdc++.h>

using namespace std; 

int main () { 

int n ;
cin >> n;  
int num = 1; 
while( n-- ) {

string s ; 
string str ; 
cin >> s;  
char o = '0' ; 
for( int i = 0 ; i < s.size() ; i++ ) {
	//cout << o << " " << s[i] << endl ; 
	while ( o != s[i] ){
		if( o > s[i] ) {
			o-- ; 
			str.push_back(')');
		}
		else {
			o++ ; 
			str.push_back('(');
		}
		
	}
	str.push_back(s[i]);
}
while ( o != '0' ) {
	o-- ; 
	str.push_back(')');
}

cout << "Case #" <<num++ << ": " << str << endl ; 


}

}
