#include<bits/stdc++.h>

using namespace std ;
bool comparator(const pair<int,int> &a , const pair<int,int> &b ) {
	return a.first > b.first ; 
}
int main () { 
	vector<int> x ;
	vector<int> y ;
	vector<pair<long long,long long>> vect ; 
	int n ;
	cin >> n ; 
	for(int i = 0 ; i < n ; i ++ ) { 
		int X; 
		cin >> X ;
		x.push_back(X);
	}
		for(int i = 0 ; i < n ; i ++ ) { 
		int Y; 
		cin >> Y ;
		y.push_back(Y);
	}
	for(int i = 0 ; i < n ; i ++ ) { 
		vect.push_back({y[i],x[i]});
	}
	sort(vect.begin(),vect.end(),comparator);
	long long sum = 0 ; 
	for(int i = 0 ; i < n ; i ++ ) {
		sum+= vect[i].second - ( i * vect[i].first );
	}
	cout << sum << endl ;
	
}
