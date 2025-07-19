#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    int x, y, r;
    cin >> x >> y >> r;

    int extra_Stick = r / 30;

    int Total_sticks = x + extra_Stick;

    if (Total_sticks % y != 0) cout << Total_sticks / y + 1 << "\n";

    else cout << Total_sticks / y << '\n';
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