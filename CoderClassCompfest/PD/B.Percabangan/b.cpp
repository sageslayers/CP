#include<bits/stdc++.h>

using namespace std ;

int main() { 
	string s; 
	cin >> s; 
	if(s[0] == '-'){
		if(s[1] == '0' )
			cout << "nol" << endl ;
		else 
			cout << "bilangan bulat negatif" << endl; 
	}
	if(s[0] == '0' )
		cout << "nol" << endl ;
	if(s[0] >= 49 && s[0] <= 97 )
		cout << "bilangan bulat positif" << endl ; 
	if(s[0] >= 97 )
		cout <<"kata" << endl ;
	
}



