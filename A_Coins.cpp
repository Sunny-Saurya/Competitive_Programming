#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;   
    cin >> n >> k;

    // equation = 2*x + k*y = n

    if (k % 2 == 0) {
        // k is even → n must be even
        if (n % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    } else {
        // k is odd
        if (n < k && n % 2 == 1) cout << "NO\n";   
        else cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
}
