#include <iostream>

using namespace std;

int main() {
	int q;
	cin >> q;

	for (int qr = 0; qr < q; ++qr) {
		int a, b, n, s;
		cin >> a >> b >> n >> s;

		if (s % n <= b && 1ll * a * n + b >= s) {
			cout << 1ll * a * n + b << " " << a * n + b << endl ;
		}
		else {
			cout << "NO\n";
		}
	}
}
y
