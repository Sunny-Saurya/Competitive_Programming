#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    vector<int>arr(n);
    for(int i =0 ; i < n; i++){
        cin >> arr[i];
    }
    
    vector<int>freq(n+1, 0);
    for(int i =0; i< n; i++){
        freq[arr[i]]++;
    }
    
    int curr = freq[1];
    int ans = curr;
    
    for(int i = 2; i <= n; i++){
        curr = min(curr, freq[i]);
        ans += curr;
    }
    cout << ans << endl;
    
}

int main() {
    int tc;
    cin >> tc;
    
    while(tc--){
        solve();
    }
}
