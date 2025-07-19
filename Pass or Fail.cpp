#include<bits/stdc++.h>

using namespace std;

#define ll             long long int
#define ff             first
#define ss             second
#define pb             push_back

void solve() {

    int n, x, p;
    cin >> n >> x >> p;

    int marks_obtained = x * 3;
    int marks_deduction = n - x;
    int total_marks = marks_obtained - marks_deduction;

    if (total_marks < p) cout << "FAIL\n";

    else cout << "PASS\n";
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