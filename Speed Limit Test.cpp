#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    float a, x, b, y;
    cin >> a >> x >> b >> y;

    if (a / x > b / y) cout << "Alice\n";

    else if (a / x < b / y)cout << "Bob\n";
    
    else cout << "Equal\n";

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