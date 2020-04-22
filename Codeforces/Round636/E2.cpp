#include <bits/stdc++.h>
using namespace std ; 
// utility function for printing 
// the found path in graph 
void printpath(vector<int>& path) 
{ 
    int size = path.size(); 
    for (int i = 0; i < size; i++)  
        cout << path[i] << " ";     
    cout << endl; 
} 
  
// utility function to check if current 
// vertex is already present in path 
int isNotVisited(int x, vector<int>& path) 
{ 
    int size = path.size(); 
    for (int i = 0; i < size; i++)  
        if (path[i] == x)  
            return 0;  
    return 1; 
} 
  
// utility function for finding paths in graph 
// from source to destination 
void findpaths(vector<vector<int> >&g, int src,  
                                 int dst, int v) 
{ 
    // create a queue which stores 
    // the paths 
    queue<vector<int> > q; 
  
    // path vector to store the current path 
    vector<int> path; 
    path.push_back(src); 
    q.push(path); 
    while (!q.empty()) { 
        path = q.front(); 
        q.pop(); 
        int last = path[path.size() - 1]; 
  
        // if last vertex is the desired destination 
        // then print the path 
        if (last == dst)  
            printpath(path);         
  
        // traverse to all the nodes connected to  
        // current vertex and push new path to queue 
        for (int i = 0; i < g[last].size(); i++) { 
            if (isNotVisited(g[last][i], path)) { 
                vector<int> newpath(path); 
                newpath.push_back(g[last][i]); 
                q.push(newpath); 
            } 
        } 
    } 
} 
  
// driver program 
int main() 
{ 
	int t;  
	cin >> t; 
	while ( t-- ) {
	int n , m, a , b, c ; 
	cin >> n >> m >> a >> b >> c; 
	vector<int> price(m);
	for (int i = 0 ; i< m ; i ++ ) 
		cin >> price[i] ; 
    vector<vector<int> > g; 
   
    int v = 9; 
    g.resize(9); 
  
    // construct a graph 
   for (int i = 0 ; i < m ; i ++ ) {
	   int x, y ; 
	   cin >> x >> y;  
	   g[x].push_back(y);
	   g[y].push_back(x) ; 
   }
  
    int src = a, dst = b; 
    cout << "path from src " << src 
         << " to dst " << dst << " are \n"; 

    findpaths(g, src, dst, v); 
     src = b ;
     dst = c; 
    cout << "path from src " << src 
         << " to dst " << dst << " are \n"; 

    findpaths(g, src, dst, v);
  }
    return 0; 
} 
