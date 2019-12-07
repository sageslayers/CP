#include <bits/stdc++.h>
using namespace std ; 

bool comparator ( const int a  ,  const int b ) {
	return a < b ; 
}

int main () {

ios_base::sync_with_stdio(false) ;
cin.tie(NULL); 

int n , k ; 
int angka ;
vector <int> bebek ; 
cin >> n >> k ; 
cin.ignore()  ; 
while ( n -- ) {
	cin >> angka ; 
	bebek.push_back(angka) ; 
	
}	
	sort ( bebek.begin(), bebek.end(), comparator) ; 
	cout << bebek[k-1] << endl  ; 
}
