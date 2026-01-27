#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i =0 ; i < n; i++){
        cin >> arr[i];
    }

    int total = 0;
    for(int num : arr){
        total += num;
    }

    int rest = 0;

    for(int i = 0; i < arr.size(); i++){
        total -= arr[i];
        rest += arr[i];

        if(total % 2 == 0 && rest % 2 == 0 || total % 2 == 1 && rest % 2 == 1){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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