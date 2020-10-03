#include<bits/stdc++.h>
using namespace std ;

int main (){

    int t; 
    cin >> t ; 
    while ( t-- ) {
        int x, y , k ; 
        cin >> x >> y >> k ; 
        int ans = 0 ; 
        ans =  (k*y) +   ((k + (k*y)-1 ) / (x-1) )     ;
        cout << ans << endl;

    }
}