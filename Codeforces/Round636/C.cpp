#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t;  
cin >> t; 
while ( t--) {
	int n  ; 
	cin >> n ; 
	long long sum = 0 ; 
	vector<int> vect(n) ; 
	for (int i = 0 ; i < n ; i ++ ) {
		cin >> vect[i] ; 
	}
	char tanda ; 
	if ( vect[0] > 0 )
		tanda = 'p' ;
	else
		tanda = 'n' ;
	int pos  = 0;
	int neg  = -1000000001 ;
	if(  vect[0] > 0 )
		pos = vect[0] ; 
	else
		neg = vect[0] ;
	for (int i = 1 ; i < n ; i ++ )  {
		//cout << sum << " " << pos <<  " " << neg << " " << vect[i] << endl; 
		if (vect[i] > 0 && vect[i-1] > 0 ) {
			pos = max(pos,vect[i]);
		}
		else if (vect[i] < 0 && vect[i-1] > 0 ) {
			sum += pos ; 
			pos = 0 ;
			neg = max(neg,vect[i]); 
		}
		else if ( vect[i] > 0 && vect[i-1] < 0 ) {
			sum+= neg ; 
			neg = -1000000001 ;
			pos = max(pos,vect[i]); 
		}
		else if ( vect[i] < 0 && vect[i-1] < 0 ) {
			neg = max(vect[i],neg);
		}
	}
	if ( pos != 0 )
		sum+= pos ; 
	if ( neg != -1000000001 )
		sum+= neg;  
	cout << sum << endl ; 
}


}
