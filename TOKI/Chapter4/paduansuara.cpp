#include<bits/stdc++.h>

using namespace std ;
int arr[20000] ;
void check(vector<int> & vect,int n,int m){
		int idx = 0 ;
		int cnt = 0 ;
		int size = vect[idx] ; 
		vector<int> dummy[n] ; 
		
		
		for(int j = 0 ; j < m ; j ++ ) {
			cnt++ ;
			if( cnt > size ) {
				cnt = 1 ;
				idx ++ ;
				size = vect[idx] ; 
			}
			dummy[idx].push_back(arr[j]);
		}
		
	
	
		bool flag = true ; 
		
		for(int x = 0 ; x < n ; x ++ ) {
			for(int y = 0 ; y < vect.size() ; y ++ ) {
					if(x!= n-1 ) {
						if(dummy[x][y] == dummy[x+1][0]){
							flag= false ;
						}
					}
			}
		}
		if(flag) {
				for(int x = 0 ; x < n ; x ++ ) {		
					for(int y = 0 ; y < vect[x] ; y ++ ) {
						if(y == vect[x]-1 && x != n-1)
							cout << dummy[x][y] +1 << " " ;
							}	
			
						}
						cout << endl ;
						exit(0);
		}
}

int main() {
	int m,n ; 
	cin >> m ; 
	
	for(int i = 0 ; i < m ; i ++ ) 
		cin >> arr[i] ;
	cin >> n ; 
	int hole[n];
	memset(hole,0,sizeof(hole));
	int cnt = 0 ;
	for (int i = 0 ; i < m ; i ++ ) {
		hole[cnt]++;
		cnt = (cnt + 1) % n ; 
	}
	
	sort(arr,arr+m);
	vector<int> vect ;
	sort(hole,hole+n);
	for(int i = 0 ;i < n ; i ++ )
		vect.push_back(hole[i]);
	//check(vect,n,m);
	for( auto & r : vect ) 
		cout << r << " " ; 
	cout << endl ; 
	while(next_permutation(hole,hole+n))
	{
		vector<int> vect ;
		for(int i = 0 ;i < n ; i ++ )
			vect.push_back(hole[i]);
		for( auto & r : vect ) 
			cout << r << " " ; 
		cout << endl ; 
		//check(vect,n,m);
	}

	
	

	
}

