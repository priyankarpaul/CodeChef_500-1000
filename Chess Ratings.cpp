#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {
	int x, y;
	cin >> x >> y;
	if (x >= y) cout << "0" << endl;

	else if ((y - x) % 8 == 0) cout << (y - x) / 8 << "\n";

	else cout << ((y - x) / 8) + 1 << "\n";

}


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}