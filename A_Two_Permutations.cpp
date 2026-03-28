#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;

    if (a + b + 2 <= n || (a == b && a == n))
            cout << "Yes" << endl; 
        else
            cout << "No" << endl; 
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