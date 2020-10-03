#include<bits/stdc++.h>

using namespace std ;

int main () { 
	int t ; 
	cin >> t ; 
	for(int i = 1 ; i <= t ;  i ++ ) { 
		int x1,y1,x2,y2,x3,y3 ; 
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
		bool check = false ; 
		if ( (x2 - x1) != 0 && (x3-x2) != 0 ){
			if (   ( (y3-y2) / (x3-x2) )  == ((y2-y1) / (x2-x1) ) &&  ((y3-y2) % (x3-x2) == (y2-y1) % (x2-x1)) )
				check = true ; 
		} 
		if (  (x1 == x2 && x2 == x3) || (y1 == y2 && y2 == y3) || check ){
			cout << "Case #" << i << ": rasi ular" << endl ;
			continue ; 
		}
		else if ( (x3 > x1 && x3 > x2 ) || (y3 > y2 && y3 > y1 ) ) {
			cout << "Case #" << i << ": rasi anjing" << endl ;
			continue ; 
		}else {
			cout << "Case #" << i << ": rasi kucing" << endl ;
			continue ; 
		}
		
	} 
	
}
