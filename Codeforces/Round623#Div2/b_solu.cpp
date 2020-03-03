#include <iostream>
#include <string>
using namespace std;
int main(){
	int T, A, B, M;
	string p;
	for(cin >> T; T; T--){
		cin >> A >> B >> M;
		cin >> p; p[p.size()-1] = 0;
		int i;
		for(i=p.size()-1; i>0 && M>=0; i--){
			cout << i << " #" << p[i] << " " << M  <<  endl ; 
			if(p[i] != p[i-1])
				M -= ((p[i-1] == 'A')? A:B);
			cout << M << "##" << endl ;
		}
		if(M<0)
			cout << i + 2 << endl;
		else
			cout << 1 << endl;
	}
}
