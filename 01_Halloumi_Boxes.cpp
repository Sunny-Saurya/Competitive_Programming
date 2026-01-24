#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool flag = true;
    if(k == 1){
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i-1]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    else cout << "YES" << endl;

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