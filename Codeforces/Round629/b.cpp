#include <bits/stdc++.h>

using namespace std ;

int main() { 
	int t ; 
	vector <unsigned long long> tingkat ; 
	tingkat.push_back(0);  
	int i = 1;  
	while (true ) { 
			unsigned long long s =   ( 1LL*i * i + i ) / 2 ; 
			tingkat.push_back(s); 
			if ( i >= 100000  )
				break ; 
			i++ ; 
		}
		
		cin >> t ; 
		while ( t -- ) { 
	vector<unsigned long long>::iterator lower ; 
	vector<unsigned long long>::iterator upper ; 
	int x ; 
	int z ; 
	cin >> x >> z ; 
	string s; 
	for( int i = 0 ; i  < x ; i ++ )  {
		s.push_back('a') ; 
	}
	
	lower = lower_bound(tingkat.begin() , tingkat.end(), z ) ; 
	int y =  distance(tingkat.begin() , lower) ; 
	int b_akhir = z - tingkat[y-1] ; 

	//cout << b_akhir << endl ; 
	//cout << y << endl ; 
	s[s.size()-y-1] = 'b' ;
	s[s.size()-b_akhir] = 'b' ; 
	cout << s << endl ; }
}
