#include<bits/stdc++.h>

using namespace std ;

int main () { 
	int n ; 
	cin >> n ; 
	int x1 , y1 , x2 , y2 ;
	int arrx1[n] ;
	int arrx2[n] ;
	int arry1[n] ; 
	int arry2[n] ;  
	int cnt = 0 ; 
	for(int i = 0 ; i < n ; i ++ )  
	cin >> arrx1[i] >> arry1[i] >> arrx2[i] >> arry2[i] ;
	for(int i = 0 ; i < n ; i ++ ) { 
		for(int j = i+1 ; j < n ; j ++ ) { 
			int absxI , absxJ , absyI , absyJ ; 
			absxI = abs(arrx1[i] - arrx2[i]);
			absyI = abs(arry1[i] - arry2[i]);
			absxJ = abs(arrx1[j] - arrx2[j]);
			absyJ = abs(arry1[j] - arry2[j]);
			if ( absxI <= absxJ && absyI <= absyJ || absxI <= absyJ && absyI <= absxJ ){
				
			}
			else if  ( absxJ <= absxI && absyJ <= absyI || absxJ <= absyI && absyJ <= absxI ){
				
			}
			else{
				/*
				cout << " ----- " << endl ;
				cout << arrx1[i] <<  " " << arry1[i] << " " << arrx2[i] << " " << arry2[i] << endl ;
				cout << arrx1[j] <<  " " << arry1[j] << " " << arrx2[j] << " " << arry2[j] << endl ;
				cout << absxI << " " << absyI<< endl ;
				cout << absxJ << " " << absyJ << endl; 
				cout << " ----- " << endl ;
				*/
				cnt++;
			}
		}
	}
	cout << cnt << endl ;
	
}
