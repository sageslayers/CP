
#include<bits/stdc++.h>

using namespace std ;
vector<pair<int,int>> plank ; 


bool sortbyf(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.first > b.first); 
} 



int main () {
	int n ,q; 
	cin >> n  ;
	
	for(int i = 0 ; i<= 100000 ; i ++ ) {
		plank.push_back({0,i});
	}
	for(int i = 0 ; i  < n ; i ++ ) {
		int x ; 
		cin >> x ;
		plank[x].first++;
	}

		
	cin >> q ; 
	char c ; 
	int x ; 
	for(int i = 0 ; i  < q ;   i ++ ) {
		cin >> c >> x ;
		if(c == '-' ){
			plank[x].first--;
		}
		else{
			plank[x].first++;
		}
		
		check(plank);
	}
		
}
