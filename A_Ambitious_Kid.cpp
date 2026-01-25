#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<int>arr(n);
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        ans = min(ans, abs(arr[i]));
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}