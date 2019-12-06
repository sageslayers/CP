#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#include <bits/stdc++.h>
using namespace std;

bool compare(string &s1 , string &s2 ) {
		if ( s1.length() != s2.length() )
			return s1.size() < s2.size() ;
		else {
			return s1 < s2 ;
		}
	}
	
int main()
{
	vector <string> arr ; 
	int n ;
	string s; 
	cin >> n ;
	cin.ignore(); 
	while (n--){
		getline(cin,s);
		arr.push_back(s);
	}
	sort (arr.begin(),arr.end(),compare);
	for ( auto i : arr ) 
		cout << i << endl ; 

}
