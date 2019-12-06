#include <vector>
#include <string>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
 map<int,int>check ;
 check[5678] = 1 ; 
 check[1] = 0 ; 
 
 printf("%i %i %i %i ",check[5678],check[1] , check[0] , check[3]);
    
    return 0;
}

