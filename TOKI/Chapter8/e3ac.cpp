#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
 
int n, w, top;
vector<int> data;
unsigned long long ans;
 
int main ()
{
    scanf ("%d", &n);
 
    top = -1;
 
    for (int i=1; i<=n; i++)
    {
        scanf ("%d", &w);
        data.push_back(w);
 
        top += 1;

        while (top >= 2 && data[top-1] <= data[top-2] && data[top-1] <= data[top])
        {
            if (data[top-2] < data[top])
            {
                /*for (int it=0; it<=data.size()-1; it++) cout << data[it] << " ";
                cout << endl; */
 
                ans += data[top-2];
                data.erase (data.begin() + top-1);
                top -= 1;
            }
            else
            {
                ans += data[top];
                data.erase(data.begin()+top-1);
                top -= 1;
            }
        }
 
        if (data[top] >= data[top-1] && top >= 1)
        {
            ans += data[top];
            data.erase (data.begin() + top-1);
            top -= 1;
        }
    }
 
    for (int i=0; i<=top-1; i++)
    {
        ans += data[i];
    }
 
    printf ("%lld\n", ans);
 
    return 0;
}
