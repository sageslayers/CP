#include<bits/stdc++.h>

using namespace std ;

int main() { 
	
	double p ; 
	cin >> p ; 
	if(p == 0 ){
		cout << 0 << endl; 
		return 0;
	}
	p/=100 ;
	cout << setprecision(9) << p / (1.0 - ((1.0-p)*(1.0-p))  ) << endl ;
	
}

