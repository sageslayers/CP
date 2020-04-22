#include<bits/stdc++.h>
using namespace std ;

int main ()  { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int n ; 

cin >> n ; 
vector<int> vect(n) ;

for (int i = 0 ; i < n ; i ++ ) 
	cin >> vect[i] ; 
map<int,int> mp ; 

for (int i = 0 ; i < n ; i ++  )
	mp[vect[i]]++ ; 
	
int maks = 0 ;
for (auto  &r : mp ) {
	//cout << r.first << " " << r.second  << endl ; 
	if ( maks < r.second ) 
		maks = r.second  ; 
	}
	
	cout << maks << endl ; 



}
