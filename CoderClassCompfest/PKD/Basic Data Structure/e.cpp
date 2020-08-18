#include<bits/stdc++.h>
 
using namespace std ;
 
int main() {
	int  n ; 
	cin >> n ;  
	priority_queue<int> maxpq ;
	priority_queue<int,vector<int>,greater<int>> minpq; 
	for(int i = 0 ; i  < n ; i ++ ) { 
		int x ; 
		cin >> x; 
		if( !maxpq.empty()){
			if( x < maxpq.top() ){
				maxpq.push(x);
			}
			else {
				minpq.push(x);
			}
		}
		else minpq.push(x);
		
		if( !minpq.empty() && int(minpq.size()) - int(maxpq.size()) >= 2 ){
			x = minpq.top() ; 
			minpq.pop() ; 
			maxpq.push(x) ;
		}
		if ( !maxpq.empty() &&  int(maxpq.size()) - int(minpq.size()) >= 2 ) {
			x = maxpq.top() ;
			maxpq.pop() ; 
			minpq.push(x);
		}
		if(  int(minpq.size()) - int(maxpq.size()) == 0 ) {
			cout << setprecision(12) << double ((minpq.top() + maxpq.top() )) / 2   << endl ;
		}
		else {
			if( minpq.size() > maxpq.size() ){
				cout << minpq.top() << endl ; 
			}
			else
				cout << maxpq.top() << endl ;
		}
	}
}
