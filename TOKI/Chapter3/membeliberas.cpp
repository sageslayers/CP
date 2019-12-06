#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL)
#include <bits/stdc++.h>
using namespace std;

bool compare ( const pair<double,double> &a , const pair<double,double> &b ) {
	return double(a.second/a.first) > double(b.second/b.first); 
	
}

int main ()  {
	double sum = 0 ;
	BOOST ; 
	pair<double,double> arr[1000] ; 
	int x ; 
	int n ; 
	cin >> n >> x ; 
	cin.ignore() ; 
	double val ; 
	for ( int i = 0  ; i < n ; i ++ ) {
		cin >> val ; 
		arr[i].first = val ; 
		
	}
	//cout << "aku" << endl ; 
	for ( int i = 0 ; i < n ; i ++ )  {
		cin >> val ; 
		arr[i].second = val ; 
	}
	int j = sizeof(arr) / sizeof(arr[0]) ;
	sort(arr,arr+n,compare); 
//	for ( int i = 0 ; i < n ; ++i ) 
	//	cout << arr[i].first << " " << arr[i].second << endl ; 
	for ( int i = 0 ; i < n ; i ++ ) {
		double harga = arr[i].second / arr[i].first ; 
		//printf("Harga  : %f\n",harga);
		if ( x - arr[i].first <0 ) {
			sum += (harga * x) ; 
			x= 0 ; 
		}
		else { 
			sum+= (harga * arr[i].first) ;  
			x -= arr[i].first ; 
		}
		//cout << "#" << x << endl ; 
		if ( x == 0 ) {
			break ; 
		}
		
	}
	printf("%.5f\n",sum);
	
}
		
