#include <iostream>

using namespace std;

int main(){
    long long int n,m,min,max;
    cin >> n;
    cin >> m;
    if ((n / 5 > m) || ((n / 5 == m) && (n % 5 > 0)) || n < 0 || m < 0 || n < m){
        min = -1;
        max = -1;
    }else
    if (n / 5 == m){
        min = n/5;
        max = min;
    }else
    if (n / 5 < m){
        if (n % 5 >= (m - (n/5))){
            max = n/5;
        }else
        if (n % 5 < (m - (n/5))){
            max = (n/5)-1;
        }
        if (n/4 < m){
            min = 0;
        }else{
            min = n - (m * 4);
        }
    }
    cout << min << ' ' << max << endl;
}
