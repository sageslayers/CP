#include<bits/stdc++.h>

using namespace std ;

int main() {
	int m ; 
	cin >> m ; 
	vector<int> arr(m);
	for(int i = 0 ; i < m ; i ++ ) 
		cin >> arr[i] ;
	int n ; 
	cin >> n ; 
	vector<int> hole (n);
	int cnt = 0 ;
	for (int i = 0 ; i < m ; i ++ ) {
		hole[cnt]++;
		cnt = (cnt + 1) % n ; 
	}
	vector<vector<int>> form;
	sort(arr.begin(),arr.end());
	vector<int> vect ;
	for (auto & r : hole )
			vect.push_back(r);
	form.push_back(vect);
	while(prev_permutation(hole.begin(),hole.end()))
	{
		vector<int> vect ;
		for (auto & r : hole ){
			vect.push_back(r);
		}
		form.push_back(vect);
	}

	while(next_permutation(hole.begin(),hole.end()))
	{
		vector<int> vect ;
		for (auto & r : hole ){
			vect.push_back(r);
		}
		form.push_back(vect);
	}

	for(int i = 0 ; i < form.size() ; i ++ ) {
		vector<int> dummy[n];
		int idx = 0 ;
		int cnt = 0 ;
		int size = form[i][idx] ; 
		for(int j = 0 ; j < m ; j ++ ) {
			cnt++ ;
			if( cnt > size ) {
				cnt = 1 ;
				idx ++ ;
				size = form[i][idx] ; 
			}
			dummy[idx].push_back(arr[j]);
		}
		bool flag = true ; 
		for(int x = 0 ; x < n ; x ++ ) {
			for(int y = 0 ; y < form[i][x] ; y ++ ) {
					if(x!= n-1 ) {
						if(dummy[x][y] == dummy[x+1][0]){
							flag= false ;
						}
					}
			}
		}
		if(flag) {
				for(int x = 0 ; x < n ; x ++ ) {		
					for(int y = 0 ; y < form[i][x] ; y ++ ) {
						if(y == form[i][x]-1 && x != n-1)
							cout << dummy[x][y] +1 << " " ;
							}	
			
						}
						cout << endl ;
						exit(0);
		}
		
		
	}
	
	
	
	
}

