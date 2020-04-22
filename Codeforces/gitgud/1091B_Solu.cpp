#include <vector>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
typedef pair<int,int> pii;
 
#define x first
#define y second
 
int main() {
    int N; cin >> N;
    vector<pii> O(N), T(N);
    for (int i = 0; i < N; i++) cin >> O[i].x >> O[i].y;
    for (int i = 0; i < N; i++) cin >> T[i].x >> T[i].y;
    sort(O.begin(),O.end());
    sort(T.begin(),T.end());
    reverse(T.begin(),T.end());
	for(auto &r : T ) 
		cout << "//" << r.first << " " << r.second  << endl ; 
    vector<pii> Ans(N);
    for (int i = 0; i < N; i++) Ans[i] = {O[i].x+T[i].x, O[i].y+T[i].y};
    sort(Ans.begin(),Ans.end());
    for(auto &r : Ans ) 
		cout << "//" << r.first << " " << r.second  << endl ; 
    cout << Ans[0].x << ' ' << Ans[0].y << endl;
}
