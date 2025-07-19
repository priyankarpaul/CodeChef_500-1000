#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {


    int n, cnt1 = 0, cnt_minus1 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) cnt1++;
        else cnt_minus1++;
    }
    if (n % 2 != 0) cout << -1 << "\n";

    else if (cnt1 > cnt_minus1) cout << (cnt1 - cnt_minus1) / 2 << "\n";

    else cout << (cnt_minus1 - cnt1) / 2 << "\n";


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