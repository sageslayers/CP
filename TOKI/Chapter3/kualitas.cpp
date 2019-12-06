#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#include <bits/stdc++.h>
using namespace std;


int main ()  {
	BOOST ; 
	cout.setf(ios::fixed);
	int n ;  
	cin >> n ; 
	float val ; 
	float sum = 0.0 ; 
	vector <float> arr ; 
	while (n--) {
	cin >> val ; 
	arr.push_back(val) ; 	
	}
	sort (arr.begin(),arr.end()) ;
	if ( arr.size() % 2 == 1 )  {
	//	cout << " # " << arr.size() << endl; 
		sum = sum +  arr[ arr.size()/2] ;
	}
	else 
		sum += (arr[arr.size()/2] + arr[arr.size()/2-1])/2 ; 
	printf("%.1f\n",sum);
}
