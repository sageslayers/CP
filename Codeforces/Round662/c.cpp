#include<bits/stdc++.h>

using namespace std ;

int main() { 
	int t; 
	 cin >> t; 
	 while (t-- ) {
		 int n ; 
		 cin >> n;
		 vector<int> rasa(100005);
		 for(int i = 0 ; i < n ; i ++ ) {
			 int x; 
			 cin >> x ;
			 rasa[x]++;
		 }
		 sort(rasa.begin(),rasa.end(),greater<int>());
		 int max = rasa[0]-1;
		 long long sum = 0 ;
		 int streak = 0 ; 
		 int last = 0 ; 
		 for(int i = 1 ; i <= 100000 ; i ++ ) {
			 if(rasa[i] == rasa[i-1])
				streak++;
			else {
				last = i ; 
			 break ; 
		 }
		 }
		 for(int i = last;  i<=100000 ; i ++ ) {
			 if(rasa[i] == 0 )
				break ;
			sum+= rasa[i] ; 
		 }
		 if (sum == 0 )
			cout << 0 << endl ;
		else
			{
				
				cout << sum / max + (streak == 0 ? 0 : streak) << endl ;
			}
	 }
	
}
