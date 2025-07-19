#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            break;
        }
    }
    if (cnt > 0 || n == 1) cout << "no\n";
    else cout << "yes\n";
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