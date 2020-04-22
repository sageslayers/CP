#include<bits/stdc++.h>
using namespace std;

int n, a[200002];
map<long long, int> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    mp[0] = -1;
    cin >> n;
    long long sm = 0;
    long long ans = 0;
    int mx = 0;
    for(int i = 1; i <= n; ++i)
    {
		//cout << ans << endl ; 
        cin >> a[i];
        sm += a[i];
        if(mp.find(sm) != mp.end())
        {
            if(sm == 0 && mp[0] == -1)
                mx = max(mx, 1);
            else
                mx = max(mx, mp[sm] + 1);
        }
        mp[sm] = i;
        ans = ans + i - mx;
    }
    cout << ans;
    return 0;
}
