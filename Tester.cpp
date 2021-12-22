#include<bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;

		cout << "YES" << endl;
		if (b > 2)
			cout << a << " " << a*(b - 1) << " " <<  a*b << endl;
		else if (b == 2) {
			cout << 3 * a << " " << a << " " <<  2 * a*b << endl;
		}
		else {
			cout <<  a << " " << 2 * a << " " <<  3 * a << endl;
		}
	}
}

