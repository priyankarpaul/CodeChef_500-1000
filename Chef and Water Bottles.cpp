#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {
	int n, x, k;
	cin >> n >> x >> k;

	if (k >= x) {
		if (n >= (k / x)) {
			cout << k / x << "\n";
		}
		else cout << n << "\n";
	}
	else cout << 0 << "\n";
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