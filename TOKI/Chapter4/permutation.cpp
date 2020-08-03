#include<bits/stdc++.h>

using namespace std ;

int main() {
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(2);
	
	while(prev_permutation(arr.begin(),arr.end())){
		
		for ( auto & r : arr ) 
			cout << r << " " ;
		cout << endl ; 
	}
	
	while(next_permutation(arr.begin(),arr.end())){
		
		for ( auto & r : arr ) 
			cout << r << " " ;
		cout << endl ; 
	}
	
}
