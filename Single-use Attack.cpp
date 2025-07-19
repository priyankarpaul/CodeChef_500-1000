#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {
    int h, x, y, cnt = 0;
    cin >> h >> x >> y;
    int New_health = abs(h - y);
    while (New_health > 0) {
        New_health -= x;
        cnt++;
    }
    cout << cnt + 1 << "\n";
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