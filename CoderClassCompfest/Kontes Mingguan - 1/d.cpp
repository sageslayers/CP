#include<bits/stdc++.h>

using namespace std ;


int main ()  {
	int t; 
	cin >> t; 
	while (t-- ) {
		int n , k ; 
		cin >> n >> k ; 
		vector<long long> vect;  
		 for (int i = 0 ; i < n ; i ++ ) {
			 int x; 
			 cin >> x; 
			vect.push_back(x);
		 }
		 sort(vect.begin(),vect.end());
		 int l = k-1 ; 
		 int r  = vect.size()-1 ; 
		 long long int best = INT_MAX; 
		 best = abs(vect[l+1]-vect[r]);
		// cout << best << endl ;
		
		 while(k--){
			//	cout << l << " "  << r << endl ;
				l--;
				r--;
				best = min(best,abs(vect[l+1]-vect[r]));
			 
		 }
		cout << best << endl; 
	}
}



