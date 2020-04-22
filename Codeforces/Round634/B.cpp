#include <bits/stdc++.h>

using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int t; 
cin >> t; 
while ( t-- )  {
	int n , a,  b;  
	string s; 
	cin >> n >> a >> b; 
	char x=  'a' ;
	char first ;  
	for (int i =0  ; i < n ; i ++ ) {
		s.push_back('a');  
	}
	for (int i = 0 ; i < n-a+1 ; i ++ ) {
		//cout << s << endl; 
		map <char,int> mp ; 
		mp[s[i]]++ ;
		//cout << i << endl; 
		int count = 1 ;
		for(int j = i+1 ; j < i+ a ; j ++ ) { 
			//cout << s[j] << " " << s[j-1] << endl ; 
			first=  s[j] ; 
			mp[s[j]]++ ; 
			if(mp[s[j]] == 1 )
				count++ ; 
		}
		//cout << count << endl ; 
		//cout << endl ; 
		if( count < b ) {
			for( int k = i+a-(b-count) ; k < i+a ; k++ )  {
				//cout << "K: " << k << " " ;
				if ( x+1 > 'z' )
					x = 'a' ; 
				s[k] = ++x ; 
			}
			//cout << endl ; 
		}
	}
	cout << s << endl ; 
}


}

