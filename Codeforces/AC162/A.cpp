#include <bits/stdc++.h>
using namespace std ;
 
int main() {
	int t ; 
	cin >> t; 
	while (t-- ) { 
 int n ; 
 cin >> n ; 
 vector<int> vect  ; 
 vector<int> vect2  ;  
 for (int i = 0 ; i < n ; i ++ ) 	{
	 int x; 
	cin >> x ;
	if ( x >= 0 ) 
		vect.push_back(x) ; 
	else
		vect2.push_back(x);  
	
}
sort(vect.begin(), vect.end() ) ;
sort(vect2.begin(), vect2.end() ) ; 

for( int i = 0 ; i < vect.size() ; i ++  )
	cout << vect[i] << " " ; 
for( int i = 0 ; i < vect2.size() ; i ++  )
	cout << vect2[i] << " " ; 
	cout << endl ; 
}

}
