#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    ll r, o, c;
    cin >> r >> o >> c;
    ll remaining_overs = abs(20 - o);
    ll remaining_runs = r - c;

    ll total_balls_left = remaining_overs * 6;

    if (total_balls_left * 6 > remaining_runs) cout << "Yes\n";

    else cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // int t;
    // cin >> t;
    // while (t--) {
    solve();
    // }
    return 0;
}