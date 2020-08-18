#include<bits/stdc++.h>

using namespace std ;

void toh(int n , char from,char to,char aux){
	if(n==1){
		//cout << n << " " << from << " " << to << endl; 
		return ;
	}
	toh(n-1,from,aux,to);
	//cout << n << " " << from << " " << to << endl; 
	toh(n-1,aux,to,from);
}


int main() {
	
	int n ; 
	cin >> n ;
	toh(n,'A','C','B');
	
}
