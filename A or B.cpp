#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    int x, y;
    cin >> x >> y;

    int point_A = 500 - (x * 2);
    int point_B = 1000 - ((x + y) * 4);

    int total_Approach_1 = point_A + point_B;

    int point_A2 = 500 - ((x + y) * 2);
    int point_B2 = 1000 - (y * 4);

    int total_Approach_2 = point_A2 + point_B2;

    if (total_Approach_1 > total_Approach_2) cout << total_Approach_1 << "\n";

    else cout << total_Approach_2 << "\n";
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