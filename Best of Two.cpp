#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    int mini_a = min({a1, a2, a3});
    int mini_b = min({b1, b2, b3});

    int total_a = a1 + a2 + a3;
    int total_b = b1 + b2 + b3;

    if (total_a - mini_a > total_b - mini_b) cout << "Alice\n";
    else if (total_a - mini_a < total_b - mini_b) cout << "Bob\n";
    else cout << "Tie\n";
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
