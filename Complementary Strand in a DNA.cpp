#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			s[i] = 'T';
		}
		else if (s[i] == 'T') {
			s[i] = 'A';

		}
		else if (s[i] == 'C') {
			s[i] = 'G';
		}
		else if (s[i] == 'G') {
			s[i] = 'C';
		}
	}
	cout << s << "\n";

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