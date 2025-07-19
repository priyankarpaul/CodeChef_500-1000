#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a == b) cout << "Yes\n";

    if (a > b) {
        int diff = a - b;
        if (diff > y) cout << "No\n";
        else cout << "Yes\n";
    }
    else if (b > a) {
        int diff = b - a;
        if (diff > x) cout << "No\n";
        else cout << "Yes\n";
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