#include<bits/stdc++.h>


using namespace std ;

int main () { 
	
ios_base::sync_with_stdio(false) ; 
cin.tie(NULL) ; 
cout.tie(NULL) ;

int t ; 
cin >> t ; 
while (t -- )  {
	int n ; 
	cin >> n;
	vector<int> vect ;
	vector<int> vect2 ;  
	int ptr1;
	int ptr2; 
	
	for( int i = 0 ; i <n ; i ++ ) 	{
		int x; 
		 cin >> x;  
		vect.push_back(x) ; 
	}
	sort(vect.begin(), vect.end() ) ; 	
	ptr1 = n / 2 ; 
	ptr2 = ptr1-1 ; 
	
	while ( ptr1 < n  || ptr2 >= 0 )  { 
		//cout << ptr1 << " " << ptr2 << endl ; 
		if( ptr1 < n ) 
			vect2.push_back(vect[ptr1++]) ; 
		if ( ptr2 >= 0 )
			vect2.push_back(vect[ptr2--]) ; 
		
	}
	for( int i = 0 ; i < n ; i ++ ) 
		cout << vect2[i] << " " ; 
		cout << endl ; 
}

}

