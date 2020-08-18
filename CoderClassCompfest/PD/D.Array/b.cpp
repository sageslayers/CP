#include<bits/stdc++.h>

using namespace std ;

int main() { 
	
	int n ; 
	vector<int> vect ; 
	cin >> n; 
	for(int i = 0 ; i < n ; i ++ ) {
		int x; 
		cin >> x; 
		vect.push_back(x);
	}
	reverse(vect.begin(),vect.end());
	for(auto & r : vect )
		cout <<r << endl ; 
}


