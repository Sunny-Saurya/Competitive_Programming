#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int countTwos = count(arr.begin(), arr.end(), 2);

    if(countTwos == 0){
        cout << 1 << endl;
        return;
    }


    if(countTwos % 2 != 0){
        cout << -1 << endl;
        return;
    }
    int need = countTwos/2;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 2) cnt++;

        if(cnt == need){
            cout << i + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
    // return;
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