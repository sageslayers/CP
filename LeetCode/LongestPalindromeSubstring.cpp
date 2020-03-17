#include <bits/stdc++.h>
using namespace std ;

int main () { 
	
string s = "cbbd" ; 
int n = s.length() ; 
        int bestlen = 0 ; 
        string substring = ""; 
        for ( int mid = 0 ; mid < n ; mid ++  ) {
            int len = 0 ; 
            for ( int x = 0 ;  mid-x >= 0 && mid+x < n ; x++  ) {
                if (s[mid-x]  != s[mid+x]  )
                    break;
                len = 2*x + 1 ; 
                if ( len > bestlen ) {
                    bestlen = len ; 
                    substring = s.substr(mid-x, len) ; 
                }
            }
        }
        for (int mid = 0 ; mid < n ; mid ++ ) {
            int len = 0 ; 
            for ( int x = 1 ; mid - x + 1 >= 0 && mid + x < n ; x ++ ) {
				cout << "@ " << s[mid-x+1] << " " << s[mid+x] << endl ; 
                if (s[mid-x+1] != s[mid+x]) {
                    break ; 
                }
                len = 2*x  ; 
                if ( len > bestlen ) {
                    bestlen = len ; 
                    substring = s.substr(mid-x+1 , len ) ;
                }
            }
        }
        
        
        cout << substring << endl ; 
}
