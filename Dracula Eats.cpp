#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    int n;
    cin >> n;

    int meals = 0;
    if (n % 7 == 0) {
        meals = n / 7;
    }
    else {
        meals = n / 7;
        if (n % 7 >= 2) {
            meals++;
        }
    }
    cout << meals << "\n";
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