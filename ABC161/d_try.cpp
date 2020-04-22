#include<bits/stdc++.h>


using namespace std ;

int main () { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;
int k ; 
cin >> k ; 

queue<int> q ;
vector<long long> vect;

   
for( int i = 1 ; i < 10 ; i ++ ) { 
	q.push(i) ; 
	vect.push_back(i) ; 
}
if ( k < 10 ) {
	cout << vect[k-1] << endl ; 
	return 0 ; }
int z =  k ; 
k-= 9 ;
 
while (k != 0 ) {
	long long x = q.front() ; 
	q.pop() ; 
	if(  x % 10 != 0 ){
		long long y =  (10*x) + (x%10)-1 ; 
		q.push(y);
		vect.push_back(y) ; 
		k-- ;  
	}
	if ( k == 0 ) 
		break ; 
	long long y = (10*x) + (x%10) ; 
	q.push(y) ; 
	vect.push_back(y) ; 
	k-- ; 
	if ( k == 0 ) 
		break ; 
	if ( x % 10 != 9 ) {
		y = (10*x) + (x%10)+1 ; 
		q.push(y) ; 
		vect.push_back(y) ;
		k-- ; 
	}
}
cout << vect[z-1] << endl ; 
	
}
