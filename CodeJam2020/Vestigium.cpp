#include <bits/stdc++.h>

using namespace std ;

int main() { 
int t ; 
cin >> t; 
int num = 1;  
while (t--)  {
int n ; 
cin >> n ; 
int mat[n][n] ; 
int cnt_row  = 0 ; 
int cnt_col = 0 ;  

for ( int i = 0 ; i < n ; i ++ )
    for(int j = 0 ; j < n ; j ++)
        cin >> mat[i][j] ;
        
for( int i = 0 ; i < n ; i ++ ) {
    map<int,int> mp ; 
    for( int j = 0 ; j < n ; j ++ ) {
        mp[mat[i][j]]++ ; 
        if(mp[mat[i][j]] > 1 ) {
            cnt_row ++ ; 
            break ; 
		}
        }
    }
for(int i = 0 ; i < n ; i ++ ) { 
    map<int,int> mp ; 
    for(int j = 0 ; j < n ; j ++) {
        mp[mat[j][i]]++ ; 
        if(mp[mat[j][i]] > 1 ) {
            cnt_col ++ ;
             break ; 
		 }
    }
}
int sum = 0 ; 
for( int i = 0 ; i < n ; i ++ )
    sum+= mat[i][i] ; 
cout << "Case #" << num++ << ": " << sum << " " << cnt_row << " " << cnt_col << endl ; 
}



}
