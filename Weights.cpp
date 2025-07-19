#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    ll w, x, y, z;
    cin >> w >> x >> y >> z;

    if (x + y == w || x + y + z == w || x + z == w || y + z == w || x == w || y == w || z == w) cout << "Yes\n";


    else cout << "No\n";

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