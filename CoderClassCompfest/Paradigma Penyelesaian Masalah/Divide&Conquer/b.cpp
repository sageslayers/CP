#include<bits/stdc++.h>

using namespace std; 
#define MOD 1000000007
int main () {
int n , q ;
cin >> n >> q; 
int arr[1000001];
memset(arr,0,sizeof(arr));
while(n--){
	int x; 
	cin >> x; 
	arr[x] = 1 ; 
}
while(q--){
	int x ;
	cin >> x ;
	if ( arr[x] == 1 )
		cout << "ada" << endl ;
	else
		cout << "tidak ada" << endl ; 
}

}
