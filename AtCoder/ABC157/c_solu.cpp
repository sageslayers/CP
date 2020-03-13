#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
void A_Duplex_Printing(void) {
 
	int N;
	cin >> N;
	cout << int((N + 1) / 2);
	return;
}
 
void B_Bingo(void) {
 
	struct Num {
		int a = 0;
		bool state = false;
	};
 
	struct Num num[3][3];
	
	for (int loop1 = 0; loop1 < 3; loop1++) {
		for (int loop2 = 0; loop2 < 3; loop2++) {
			cin >> num[loop1][loop2].a;
		}
	}
 
	int N;
	cin >> N;
 
	int b;
	for (int loop = 0; loop < N; loop++) {
		cin >> b;
		for (int loop1 = 0; loop1 < 3; loop1++) {
			for (int loop2 = 0; loop2 < 3; loop2++) {
				if (num[loop1][loop2].a == b) {
					num[loop1][loop2].state = true;
					goto label1;
				}
			}
		}
	label1:
		continue;
	}
 
	for (int loop = 0; loop < 3; loop++) {
		if (num[loop][0].state && num[loop][1].state && num[loop][2].state
			|| num[0][loop].state&& num[1][loop].state&& num[2][loop].state) {
			cout << "Yes" << flush;
			return;
		}
	}
	if (num[0][0].state && num[1][1].state && num[2][2].state
		|| num[0][2].state&& num[1][1].state&& num[2][0].state) {
		cout << "Yes" << flush;
		return;
	}
 
	cout << "No" << flush;
	return;
}
 
void C_Guess_The_Number(void) {
 
	int N, M;
	cin >> N >> M;
 
	int num[3] = { -1, -1, -1 };
	int s, c;
	for (int loop = 0; loop < M; loop++) {
		cin >> s >> c;
		if (num[s - 1] == -1 || num[s - 1] == c) {
			num[s - 1] = c;
		}
		else {
			cout << -1 << flush;
			return;
		}
	}
 
	if (N > 1 && num[0] == 0) {
		cout << -1 << flush;
		return;
	}
	if (N > 1 && num[0] == -1) num[0] = 1;
	for (int loop = 0; loop < N; loop++) {
		cout << ((num[loop] == -1) ? 0 : num[loop]) << flush;
	}
	return;
}
 
void D_Friend_Suggestion(void) {
 
	int N, M, K;
	cin >> N >> M >> K;
 
	struct Human {
 
		vector<int> Friend;
		vector<int> Block;
	};
	vector<struct Human> human(N);
	int A, B;
	for (int loop = 0; loop < M; loop++) {
		cin >> A >> B;
		human[A].Friend.push_back(B);
		human[B].Friend.push_back(A);
	}
	int C, D;
	for (int loop = 0; loop < M; loop++) {
		cin >> C >> D;
		human[C].Block.push_back(D);
		human[D].Block.push_back(C);
	}
 
	return;
}
 
int main(void) {
 
	//A_Duplex_Printing();
	//B_Bingo();
	C_Guess_The_Number();
	//D_Friend_Suggestion();
	return 0;
}
