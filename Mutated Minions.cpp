#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {
    int n, k, cnt = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if ((x + k) % 7 == 0) cnt++;
    }
    cout << cnt << "\n";
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