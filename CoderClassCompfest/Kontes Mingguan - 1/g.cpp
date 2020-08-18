#include<bits/stdc++.h>

using namespace std ;



int main ()  {
	int t; 
	cin >> t; 
	while (t-- ) {
		
		int n ;  
		cin >> n ; 
		vector<string> dict[n];
		for(int xx = 0 ; xx < n ; xx ++ ){
			string  str ;
			cin >> str;
			set <string> s; 
			 for(int len = 2 ; len <= 4 ; len ++ ) {
				 if( len > str.size() )
					break ;
				for(int i = 0 ; i < str.size()-len+1 ; i ++ ) {
					bool konsonan = false ;
					bool vokal = false ; 
					string temp ; 
					for(int j = i ; j < i + len ; j ++ ) {
						if ( str[j] == 'a' || str[j] == 'i' ||  str[j] == 'u' || str[j] == 'e' || str[j] == 'o' )
							vokal = true ;
						else
							konsonan = true ; 
							temp.push_back(str[j]);
							
					}
					if( vokal && konsonan ) 
						dict[xx].push_back(temp);
				}
			}
			
		}
		
		int cnt = 0 ; 
		for(int i = 0 ; i< n ; i ++ ) {
			
			for(int j = i+1 ; j < n ; j ++ ) {
				bool found = false ;
				if( i == j )
					continue ; 
				for( auto & r  : dict[i]  ) {
						for(auto & rr : dict[j] ) {
							//cout << i << " " << j << endl ;
						//	cout << r << " " << rr << " " << cnt << endl ;
							if ( r == rr ){ 
								cnt ++ ;
								found = true ; 
								break ; 
							}
							if ( found )
								break ;
						}
						if( found )
							break ;
				}
		} 
	}
		cout << cnt << endl ;
}

}




