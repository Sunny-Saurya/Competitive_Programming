#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int>arr(n);

    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    int maxLen = 0;
    int count = 0;
    for(int i =0 ; i < n; i++){
        if(arr[i] == 0){
            count++;
            maxLen = max(maxLen, count);
        }
        else{
            count = 0;
        }
    }
    cout << maxLen << endl;
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