#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {


    int n, start38 = 0, ltime108 = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "START38") start38++;
        else ltime108++;
    }
    cout << start38 << " " << ltime108 << "\n";
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