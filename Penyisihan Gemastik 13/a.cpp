#include<bits/stdc++.h>
using namespace std ;
bool comparator (const pair<long long,string> a , const pair<long long, string> b){
    return a.first > b.first ; 
}
int main ( ) {
int n ; 
cin >> n  ; 
vector<pair<long long int,string>> res ;
for(int i = 0 ; i < n ; i ++ ) {
    string strx , stry ;
    int x1,y1,p1,x2,y2,p2; 
    cin >> strx >> x1 >> y1 >>p1 >> stry >> x2 >> y2 >>p2 ;
    long long x = abs(x1-x2);
    long long y= abs(y1-y2);
    x*=x ; 
    y*= y; 
    long long z = x+y; 
    z = sqrt(z);
    string str = strx + " " + stry ; 
    res.push_back({z,str});

} 
sort(res.begin(),res.end(),comparator);

for(int i = 0 ; i < res.size() ; i ++ ) {
    cout << res[i].second << " " << res[i].first << endl  ; 
}

}