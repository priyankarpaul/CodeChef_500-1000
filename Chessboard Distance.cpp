#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int max1 = abs(x1 - x2);
    int max2 = abs(y1 - y2);

    if (abs(max1 > max2)) cout << max1 << "\n";
    else cout << max2 << "\n";
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