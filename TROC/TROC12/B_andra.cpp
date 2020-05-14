#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);

    long long pangkat = pow(2, n);

    for(int i = 0; i <= n; ++i)
    {
        cin >> v[i];
    }

    long long sum = 0;
    for (int i = 0; i <= n; ++i)
    {
        sum = sum + 1LL * v[i] * pow(2, i);
    }
    cout << sum << " " << pangkat << endl ; 
	if ( sum % pangkat == 0 )
		cout << sum / pangkat << endl ; 
	else
		cout << -1 << endl ; 
}
