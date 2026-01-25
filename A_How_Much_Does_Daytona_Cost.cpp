#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin >> n >> k;

    vector<int>arr(n);
    for(int i =0 ; i < n; i++){
        cin >> arr[i];
    }
    bool flag = false;

    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            flag = true;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
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