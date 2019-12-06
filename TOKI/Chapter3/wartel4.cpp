#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	BOOST ; 
	string s ; 
	vector <string>::iterator it ; 
	vector <string> nama ; 
	vector <string> telepon ; 
	int n , q ; 
	cin>> n >>  q ; 
	getline(cin,s);
	while (n--) {
		getline(cin,s);
		nama.push_back(s.substr(0,s.length()-7));	
		telepon.push_back(s.substr(s.length()-6,6));
	}
	while (q--) {
		getline (cin,s) ; 
		it = lower_bound (nama.begin(), nama.end() , s ) ; 
		if ( *it == s ) 
			cout << telepon[distance(nama.begin(),it)] << endl ; 
		else
			cout << "NIHIL" << endl ; 
	}



}
