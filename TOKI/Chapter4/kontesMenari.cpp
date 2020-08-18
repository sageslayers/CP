#include<bits/stdc++.h>

using namespace std ;



int main() { 
	
	ios_base::sync_with_stdio(false) ; 
	cin.tie(0);
	cout.tie(0); 
	string s ; 
	int p ; 
	int n , r , y ,j ; 
	getline(cin,s);
	cin >> n >> r >> y >> j;  
	vector<pair<int,char>> gerakan  ; 
	for (int i = 0 ; i < n ; i ++ ) {
		int x ;
		char y ; 
		cin >> x >> y ; 
		gerakan.push_back({x,y});
	}
	vector<int> nilaiJuri(j);
	for(int i = 0 ; i < j ; i ++ )
		cin >> nilaiJuri[i] ;
	vector<vector<pair<int,char>>> config ; 
	sort(gerakan.begin(),gerakan.end());
	for (int i = 0 ; i <= n - r  ; i ++ ) {
		
		for(int j = i+1 ; j <= n -r + 1   ; j ++ ) {
			vector<pair<int,char>> dummy ;
			dummy.push_back({i,gerakan[i].second}); 
			for(int k = j ; k < j +r-1 ; k ++ ) {
				dummy.push_back({k,gerakan[k].second}); 
			}
			for(auto & r : dummy ) 
				cout << r.first << r.second << " " ;
			cout << endl ; 
			config.push_back(dummy);
		}
		
	}
	int prefixSum[200000] ;
	memset(prefixSum,0,sizeof(prefixSum));
	for (int i = 0 ; i < config.size() ; i ++ ) {
		bool yakin ,pukau  , lelah;  
		yakin = pukau = lelah = false ;
		int sum = 0 ;
		for(int j = 0 ; j < config[i].size(); j ++ ) {
			int cur = 0 ;
			cur += gerakan[config[i][j].first].first ; 
			if(pukau){
				cur*=2 ;
				pukau = false ; 
			}
			if(lelah){
				cur/=2 ;
				lelah = false ; 
			}
			if(yakin)
				cur+= y ;
			if(config[i][j].second == 'Y' )
				yakin = true ;
			if(config[i][j].second == 'P' )
				pukau = true ; 
			if(config[i][j].second == 'L' )
				lelah = true ; 
		//	cout << config[i][j].first  << config[i][j].second << " "  ;
			sum += cur ; 
		}
	//	cout << endl ;
		//cout << sum << " " << prefixSum[1] << endl;
		prefixSum[1]++;
		prefixSum[sum+1]--;
	}
	for(int i = 1 ; i <= 100000 ; i ++ ) {
		prefixSum[i] += prefixSum[i-1];
	}
	for(int i = 0 ; i < nilaiJuri.size() ; i ++ ){
		cout << prefixSum[nilaiJuri[i]+1] << endl ;
	}
	
	
	
}
