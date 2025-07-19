#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    ll n, a, b;
    cin >> n >> a >> b;
    if (n == 1) cout << max(a, b) << "\n";
    else if (n % 2 == 0)cout << (a + b) * (n / 2) << "\n";
    else cout << (a + b) * (n / 2) + b  << "\n";
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