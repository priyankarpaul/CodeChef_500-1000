#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    int x, y, z;
    cin >> x >> y >> z;
    if (x <= 3) {
        cout << x*y << "\n";
    }
    else if (x % 3 == 0) cout << (x * y) + (((x / 3) - 1)*z) << endl;

    else cout << ((x / 3)*z) + (x * y) << endl;

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