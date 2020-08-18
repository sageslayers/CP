#include<bits/stdc++.h>

using namespace std ;


int main() { 
		int n , q ; 
		cin >> n >> q;  
		string s ; 
		cin >> s; 
		while(q--){
			int  l , r , x ;
			cin >> x >> l >> r; 
			if ( x == 1 ) {
			//	cout <<s << endl ;
				swap(s[l-1],s[r-1]);
			//	cout << s << endl ;
			}
			else {
				//cout << s << endl ;
				reverse(s.begin()+l-1,s.begin()+r);
				//cout << s << endl;
			}
			
		}
		cout << s << endl ; 
}


