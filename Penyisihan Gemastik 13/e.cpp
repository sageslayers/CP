#include<bits/stdc++.h>
using namespace std ;
#define MOD 100000037
unsigned long long rec(unsigned long long n , unsigned long long pangkat) {
    if (pangkat == 1 )
        return n % MOD ; 
    if (pangkat % 2 == 0 ){
        unsigned long long ans = rec(n,pangkat/2);
        ans = ans % MOD ;
        ans *= ans ; 
        ans = ans % MOD ;
        return ans ; 
    }else if ( pangkat % 2 == 1 ) {
        unsigned long long ans = rec(n,pangkat/2);
        ans = ans % MOD ;
        ans *= ans ; 
        ans = ans % MOD ;
        ans *= n ;
        ans = ans % MOD ;
        return ans ; 
    }
}
int main ( ) {
int n ; 
cin >> n ; 
vector<unsigned long long> vect ;
for(int i = 0 ; i < n ; i ++ ){
    unsigned long long x ; 
    cin >> x ;
    vect.push_back(x);
}
reverse(vect.begin(),vect.end());
unsigned long long pangkat = 1 ;
unsigned long long ans = 0 ; 
for(int i = 0 ; i < n  ; i ++ ) {
    pangkat =  rec(vect[i],pangkat);
}
    cout << pangkat % MOD << endl ;
}