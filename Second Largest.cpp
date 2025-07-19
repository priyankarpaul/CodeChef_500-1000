#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a < c || a > c && a < b) cout << a << "\n";

    else if (b > a && b < c || b > c && b < a) cout << b << "\n";

    else cout<<c<<"\n";

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