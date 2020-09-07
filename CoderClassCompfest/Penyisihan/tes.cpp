#include<bits/stdc++.h>

using namespace std ;

int main(){
	int n ; 
	cin >> n ; 
	vector<long long> vect ;
	vector<long long> penampung; 
	vector<long long> penampung2;
	int start ;
	for(int i = 0 ; i < n ; i ++ ) { 
		int x ;
		cin >> x ; 
		vect.push_back(x);
	}
	long long temp = vect[0] ; 
	for(int i = 1 ; i < n ; i ++) {
		if ( vect[i] >= temp ) { 
			temp = vect[i] ; 
		}
		else {
			penampung.push_back(vect[i]);
		}
	}
	temp = penampung[0] ; 
	bool benar = true ; 
	for (int i = 1 ; i < penampung.size() ; i ++ ) {
		if ( penampung[i] > temp ) {
			benar = false ; 
		}
	}
	for(auto & r : penampung )
		cout << r << " " ;
	cout << endl; 
	
	if (benar) {
		cout << "Ya" << endl ;
	}
	else {
		temp = vect[0] ; 
		for(int i = 1 ; i < n ; i ++) {
		if ( vect[i] <= temp ) { 
			temp = vect[i] ; 
		}
		else {
			penampung2.push_back(vect[i]);
			}
		}
		temp = penampung[0] ; 
	bool check = true ; 
	for (int i = 1 ; i < penampung2.size() ; i ++ ) {
		if ( penampung2[i] < temp ) {
			benar = false ; 
		}
	}
		if (benar) {
		
		cout << "Ya" << endl ;
	}
	else {
		cout << "Tidak" << endl ;
	}
	}
	
	
}
