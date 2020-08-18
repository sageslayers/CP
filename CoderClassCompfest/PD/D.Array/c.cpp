#include<bits/stdc++.h>

using namespace std ;

int main() { 
	
	int n ; 
	cin >> n ; 
	vector<int> vect(n) ; 
	vector<int> vect2 ;
	int st = 0 ; 
	int lst = n-1 ; 
	bool depan = true ; 
	for(int i = 0 ; i  < n ;  i ++ ) {
		cin >> vect[i] ; 
	}
	for (int i = 0 ; i < n ; i ++ ){
		if(depan){
			vect2.push_back(vect[st++]);
		}
		else {
			vect2.push_back(vect[lst--]);
		}
		depan = !depan ; 
	}
	for (int i = 0 ; i < n; i ++ ) {
		cout << vect2[i] ;
		if(i != n-1)
			cout << " " ;
	}
	cout << endl ;
	
}


