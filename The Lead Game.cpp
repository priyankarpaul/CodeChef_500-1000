#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {
    int n;
    cin >> n;

    int sum1 = 0, sum2 = 0;

    int winner, lead = 0;
    int diff = 0;
    for (int i = 0; i < n; i++) {
        int player1, player2;
        cin >> player1 >> player2;
        sum1 += player1;
        sum2 += player2;
        if (sum1 > sum2) {
            diff = sum1 - sum2;
            if (diff > lead) {
                lead = diff;
                winner = 1;
            }
        }
        else {
            diff = sum2 - sum1;
            if (diff > lead) {
                lead = diff;
                winner = 2;
            }
        }
    }
    cout << winner << " " << lead << "\n";

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
    // return 0;
}
