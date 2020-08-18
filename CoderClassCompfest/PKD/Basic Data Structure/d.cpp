#include<bits/stdc++.h>

using namespace std ;

int main() {
	int t; 
	cin >> t; 
	unordered_map<string,int> mp ; 
	while (t-- ) {
		string q , nama ; 
		cin >> q >> nama ; 
		if(q == "DAFTAR" )
			mp[nama]++;
		else
			cout << mp[nama] << endl; 
	}
}


