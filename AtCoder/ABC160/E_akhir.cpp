#include<bits/stdc++.h>
using namespace std ;

int main() { 
	
	int x , y , a, b,  c ; 
	cin >> x >> y >> a >> b >> c ; 
	vector <int> red(a),green(b),nocolor(c) ; 
	
	for (int i = 0 ; i < a;  i++ ) 
		cin >> red[i] ; 
	
	for (int i = 0 ; i < b ; i ++ )
		cin >> green[i] ; 
		
	for (int i = 0 ; i < c ; i ++ ) 
		cin >> nocolor[i] ; 
	
	vector<int> best  ; 
	sort(red.begin(),red.end(),greater<int>());	
	sort(green.begin(),green.end(),greater<int>());
	sort(nocolor.begin(),nocolor.end(),greater<int>());
	
	for ( int i = 0 ; i < x ; i ++ ) 
		best.push_back(red[i]);
	for (int i = 0 ; i  < y ; i++ ) 
		best.push_back(green[i]);
	for ( auto & r : nocolor )
		best.push_back(r); 
	sort(best.begin() , best.end() , greater<int>() ) ; 
	 
	cout << accumulate(best.begin(),best.end()) << endl ; 
	
}
