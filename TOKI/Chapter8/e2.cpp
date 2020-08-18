#include <bits/stdc++.h>

using namespace std ;

int main () {
	
	int t; 
	cin >> t; 
	vector<int> vect ;
	int top = -1;
	long long sum = 0 ;
	while(t--){
		int x; 
		cin >> x; 
		vect.push_back(x) ;
		top++;
		while ( top >=2 && vect[top-1] <= vect[top-2] && vect[top-1] <= vect[top] ){
			if( vect[top-2] < vect[top] ){
				sum+= vect[top-2];
				vect.erase(vect.begin()+top-1);
				top--;
			}else{
				sum+= vect[top];
				vect.erase(vect.begin()+top-1);
				top--;
			}
		}
		if( vect[top] >= vect[top-1] && top >=1 ){
			sum+= vect[top];
			vect.erase(vect.begin()+top-1);
			top--;
		}
		
	}
	for(int i = 0 ; i < vect.size()-1 ; i ++ )
		sum+= vect[i] ;
	cout << sum << endl ;
}
