#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k, x;
    cin >> n >> k >> x;

    long long minSum = (k * (k + 1)) / 2;
	long long maxSum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
    if(x >= minSum && x <= maxSum){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;

    while(tc--){
        solve();
    }
}