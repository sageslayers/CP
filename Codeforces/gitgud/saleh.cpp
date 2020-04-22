#include <iostream>

using namespace std;
/*
	given t testcase
	for each testcase:
		-given n attendee.
			-i-th attendee have a name, a session 3 score, a session 2 score, and a session 1 score.
			-given m attendee that passed the selection.
		
		
		given string s, name of the k-th attendee's name.
		determine if k-th attendee pass the selection or not.
	
	
	
*/

int main(){
	
	int test, m, n;
	n=80;
	string peserta[n];
	int sesi_1[n],sesi_2[n],sesi_3[n];
	int count;
	int temp3,temp2;
	bool pernah[n], sama_3[n],sama_2[n];
	int max3, max2, max1;
	bool lulus;
	bool sudah[n];
	int t,t1;
	temp2=0;
	temp3=0;
	count=0;
	string ditanya;
	int max;
	int total[80];
	
	cin>>test;
	
	for(int h=0;h<test;h++){
		
		cin>>n>>m;
		cin >> ditanya ;
		for(int g=0;g<n;g++){
			cout << " im here " << endl ;
			
			cin>>peserta[g]>>sesi_1[g]>>sesi_2[g]>>sesi_3[g];
			cout << " im here 2 " << endl ; 
			total[g] = sesi_3[g]*501501+sesi_2[g]*501+sesi_1[g];	
			
			sudah[g]=false;
			
		}

		
		lulus=false;
		
		while((m>0)&&!(lulus)){
			int max=0;
			for(int i=0;i<n;i++){
				if(!sudah[i]){
					if(total[i]>total[max]){
						
						max = i;
						
					}
				}
			}	
			m--;
			sudah[max]=true;
			if(ditanya==peserta[max])
				lulus = true;
		}
		
		if(lulus)
			cout<<"YA"<<endl;
		else
			cout<<"TIDAK"<<endl;
		
		
	}
}
