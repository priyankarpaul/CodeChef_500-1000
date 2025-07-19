#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    ll s, x, y, z;
    cin >> s >> x >> y >> z;

    int diff = s - (x + y);
    if (diff > z || diff == z) cout << "0\n";

    else if (diff < z) {
        if (diff + max(x, y) >= z) cout << 1 << "\n";
        else cout << 2 << "\n";
    }
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