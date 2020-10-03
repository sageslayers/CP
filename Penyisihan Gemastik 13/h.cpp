#include <bits/stdc++.h>
using namespace std;

 int mat[10001][10001];
 unsigned long long sum[10001][10001];

unsigned long long findSubmatrixSum(int p, int q, int r, int s)
{
	
	unsigned long long total = sum[r][s];
    //cout << "#" << total << endl ; 
	if (q - 1 >= 0)
		total -= sum[r][q - 1];
    //  cout << "#" << total << endl ; 
	if (p - 1 >= 0)
		total -= sum[p - 1][s];
    //  cout << "#" << total << endl ; 
	if (p - 1 >= 0 && q - 1 >= 0)
		total += sum[p - 1][q - 1];
     // cout << "#" << total << endl ; 
	return total;
}

int main()
{
	int m , n  , qr ; 
    cin >> m >> n >> qr ;
   
    for(int i = 0 ; i < m ; i ++ ) {
        for(int j = 0 ; j < n ; j ++) {
            cin >> mat[i][j];
        }
    } 
    sum[0][0] = mat[0][0];
	for (int j = 1; j < n; j++)
		sum[0][j] = mat[0][j] + sum[0][j - 1];
	for (int i = 1; i < m; i++)
		sum[i][0] = mat[i][0] + sum[i - 1][0];
	for (int i = 1; i < m; i++)
		for (int j = 1; j < n; j++)
			sum[i][j] = mat[i][j] + sum[i - 1][j] + sum[i][j - 1]
				- sum[i - 1][j - 1];
    while(qr--){
        int p,q,r,s;
        cin >> p >> q >> r >> s ; 
        cout << findSubmatrixSum(p-1,q-1,r-1,s-1) << endl ;
    }

	return 0;
}