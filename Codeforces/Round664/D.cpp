#include<bits/stdc++.h>

using namespace std ;

int main () {
	int n , d , m ;
	cin >> n >> d >> m ; 
	deque<long long int> dq ; 
	vector<int> vect;  
	for(int i = 0 ; i <n ; i ++ ) {
		int x; 
		cin >> x ;
		vect.push_back(x) ;
	}
	sort(vect.begin(),vect.end(),greater<int>());
	for(int i = 0 ; i < n ; i ++ ) 
		dq.push_back(vect[i]);
	long long sum = 0 ; 
	while(!dq.empty()){
		cout << dq.front() << endl ;
		if(dq.front() <= m ){
			sum+= dq.front();
			dq.pop_front();
		}
		else {
			sum+= dq.front() ;
			dq.pop_front();
			for(int i = 0 ; i < d ; i ++ ){
				cout << dq.back() << " lepas" << endl ;
				dq.pop_back();
			}
		}
	}
	cout << sum << endl ;
}
