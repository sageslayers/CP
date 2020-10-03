#include<bits/stdc++.h>

using namespace std ;


void dfs(bool a[],bool *b ) {
    a[0] = true ; 
    b[0] = true ; 
}

int main(){
    bool a[11],b[11];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    dfs(a,b);
    for(int i = 0 ; i < 5 ; i ++)
        cout << a[i] << " " ;
    cout << endl ;
    for(int i = 0 ; i < 5 ; i++ )
        cout << b[i] << " " ; 
    cout << endl ; 
}