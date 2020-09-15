#include<bits/stdc++.h>

using namespace std ;

int main () { 
	long long sum = 0 ; 
	long long maxx = 0 ;
	long long int n ; 
	vector<int> vect ; 
	while ( cin >> n ) { 
		vect.push_back(n);
	}
	sort(vect.begin(),vect.end(),greater<int>());
	if ( vect.size() == 2 && vect[0] == vect[1] ) {
		cout << "MUNGKIN" << endl;
	}else if ( vect.size() == 3 && vect[1] + vect[2] > vect[0])
		cout << "MUNGKIN" << endl; 
	else if ( vect.size() > 3 ){
		int zero = 0 ; 
		for(int i = 0 ; i < vect.size() ; i ++ ) {
			if ( vect[i] == 0 )
				zero++;
		}
		int sz = vect.size() ; 
		if ( sz - zero == 2 ) {
			if ( vect[0] == vect[1] )
				cout << "MUNGKIN" << endl ;
			else 
				cout << "MUSTAHIL" << endl ;
		}else if ( zero == sz ){
			cout << "MUNGKIN" << endl ;
		}else if (sz - zero > 3) {
			cout << "MUNGKIN" << endl ;
		}else if ( sz-zero == 3 ){
			if ( vect[1] + vect[2] > vect[0] ){
				cout <<"MUNGKIN" << endl ;
			}else {
				cout << "MUSTAHIL" << endl ;
			}
		}else {
			cout << "MUSTAHIL" << endl ;
		}
	}else {
		cout << "MUSTAHIL" << endl ;
	}
	
}
