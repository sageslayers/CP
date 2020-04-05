#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int, int> > vpii;
typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;
#define INF 0x3f3f3f3f
#define MOD 998244353LL
#define EPSILON 0.00001
#define f first
#define s second
#define pb push_back
#define mp make_pair
 
#define FOR(i, a, b) for (ll i=(a); i<=(signed)(b); i++)
#define F0R(i, a) for (ll i=0; i<(signed)(a); i++)
#define RFOR(i, a, b) for (int i=(a); i >= b; i--)
 
#define MN 2005
int n, x, y;
vi e[MN];
int tds[MN];
 
int dis[MN];
queue<int> ree;
void bfs(int rt){
    //cout << "doing " << rt << "\n";
    memset(dis, -1, sizeof dis);
    while(!ree.empty()) ree.pop();
    ree.push(rt);
    dis[rt] = 0;
    while(!ree.empty()){
        int cn = ree.front();
        ree.pop();
        //cout << cn << " has dist of " << dis[cn] << "\n";
        for(auto nn : e[cn]){
            if(dis[nn] == -1){
                dis[nn] = dis[cn]+1;
                if(nn > rt) tds[dis[nn]]++;
                ree.push(nn);
            }
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> n >> x >> y;
    FOR(i, 1, n-1){
        e[i].pb(i+1);
        e[i+1].pb(i);
    }
    e[x].pb(y);
    e[y].pb(x);
    FOR(i, 1, n) bfs(i);
    FOR(i, 1, n-1){
        cout << tds[i] << "\n";
    }
 
    return 0;
}
