#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int>arr(n-1);

    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    int missing = 0;

    for(int i = 0; i < n-1; i++){
        missing += arr[i];
    }
    cout << -missing << endl;
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