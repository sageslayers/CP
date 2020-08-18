#include<bits/stdc++.h>

using namespace std ;
vector<vector<int>> arr; 
int num ;
bool check(vector<int> vect ) {
	int tmp[3][3] ;
	int num = 0 ; 
	for(int i = 0 ;  i < 3 ; i ++ ){
		for(int j = 0 ; j < 3 ; j ++ ) {
			tmp[i][j] = vect[num++];
		}
	}
	
	bool mc = true ; 
	for(int i = 0 ; i < 3 ; i ++ ){
		int sum = 0 ; 
		for(int j = 0 ; j < 3 ; j ++ ) {
			sum+= tmp[i][j] ; 
		}
		if (sum!= 15 ){
			mc = false ; 
			break ; 
		}
	}
	if(!mc)
		return false ;
	for(int i = 0 ; i < 3 ; i ++ ){
		int sum = 0 ; 
		for(int j = 0 ; j < 3 ; j ++ ) {
			sum+= tmp[j][i] ; 
		}
		if (sum!= 15 ){
			mc = false ; 
			break ; 
		}
	}
	
	if(!mc)
		return false ;
		
	if((tmp[0][0] + tmp[1][1] + tmp[2][2] == 15 ) && (tmp[0][2] + tmp[1][1] + tmp[2][0] == 15) )
		mc  = true ;
	else
		mc = false ; 
	if(!mc)
		return false ;
		
	return true ;
}

void generate(){
	vector<int> vect ;
	for(int i = 0 ; i < 9 ; i ++ ) {
		vect.push_back(i+1); 
	}
	while(next_permutation(vect.begin(),vect.end())){
	
		
		if(check(vect))
			arr.push_back(vect);
	}
}

int main () {
	num = 0 ;
	vector<int> vect ;
	
	for(int i = 0 ; i < 9 ; i ++ ) {
		int x; 
		cin >> x ;
		vect.push_back(x);
	}
	generate();
	int mins = INT_MAX ; 
	for(int i = 0 ; i < arr.size() ; i ++ ) { 
		int sum = 0 ;
		for(int j = 0 ; j < arr[i].size() ; j ++ ){
			sum += abs(vect[j] - arr[i][j]);
		}
		mins = min(mins,sum);
	}
	cout << mins << endl ; 
}
