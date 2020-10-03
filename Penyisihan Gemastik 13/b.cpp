#include<bits/stdc++.h>
using namespace std ;
vector<string> s ; 
bool ketemu = false ; 
bool lompat = false ; 
int n ,m  ;
map<pair<int,int>,bool> mapketemu ;
map<pair<int,int>,bool> maplompat ;
void cariketemu(int i,int j) {
    mapketemu[{i,j}]= true ;
    if (s[i][j] == 'C'){
        ketemu = true ;
        return ;
    }
    if ( i+1 <= n && s[i+1][j] != 'x' && s[i+1][j] !=  '|' && s[i+1][j] != '-' && !mapketemu[{i+1,j}]){
        cariketemu(i+1,j);
    }
    if ( i-1 >= 1 && s[i-1][j] != 'x' && s[i-1][j] !=  '|' && s[i-1][j] != '-'&& !mapketemu[{i-1,j}] ){
        cariketemu(i-1,j);
    }
    if ( j+1 < m && s[i][j+1] != 'x' && s[i][j+1] !=  '|' && s[i][j+1] != '-'&& !mapketemu[{i+1,j+1}] ){
        cariketemu(i,j+1);
    }
    if ( j-1 >= 0 && s[i][j-1] != 'x' && s[i][j-1] !=  '|' && s[i][j-1] != '-'&& !mapketemu[{i,j-1}] ){
        cariketemu(i,j-1);
    }
}
void carilompat(int i , int j ) {
    //cout << i << " " << j <<  " " << s[i][j] << endl ; 
    maplompat[{i,j}]= true ;
    if (s[i][j] == ' ' && (i == n || i == 0 || j == m || j == 0)){
        lompat = true ;
        return ;
    }
    if ( i+1 <= n && s[i+1][j] != 'x' && s[i+1][j] !=  '|' && s[i+1][j] != '-' && !maplompat[{i+1,j}] ){
        carilompat(i+1,j);
    }
    if ( i-1 >= 0 && s[i-1][j] != 'x' && s[i-1][j] !=  '|' && s[i-1][j] != '-' && !maplompat[{i-1,j}] ){
        carilompat(i-1,j);
    }
    if ( j+1 < m && s[i][j+1] != 'x' && s[i][j+1] !=  '|' && s[i][j+1] != '-' && !maplompat[{i,j+1}] ){
        carilompat(i,j+1);
    }
    if ( j-1 >= 0 && s[i][j-1] != 'x' && s[i][j-1] !=  '|' && s[i][j-1] != '-' && !maplompat[{i,j-1}] ){
        carilompat(i,j-1);
    }
}
int main ( ) {

cin >> n ;
cin >> m ;
cin.ignore();
  for(int i = 0 ; i <= n ; i ++) {
      string str;
      getline(cin,str);
      s.push_back(str);
  }
pair<int,int> lokasiCepot ;
pair<int,int> lokasiDawala ; 
    for(int i = 0 ; i <= n ; i ++ ) {
        for(int j = 0 ; j < m ; j ++ ){
           // cout << s[i][j] ;
            if(s[i][j] == 'C'){
                lokasiCepot = {i,j};
            }
            if (s[i][j] == 'D')
                lokasiDawala = {i,j};
        }
        //cout << endl ;
    }
    cariketemu(lokasiDawala.first,lokasiDawala.second);
    carilompat(lokasiCepot.first,lokasiCepot.second);
   
    if(ketemu){
        cout << "Dawala bertemu Cepot" << endl ;
    }else {
        cout << "Dawala tidak bertemu Cepot" << endl ; 
    }
    if (lompat){
        cout << "ada jalan Cepot lumpat" << endl ;
    }else {
        cout << "tidak ada jalan Cepot lumpat" << endl ; 
    }
}