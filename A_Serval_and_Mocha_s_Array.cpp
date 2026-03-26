#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int flag = 0;

    for(int i =0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(__gcd(arr[i], arr[j]) <= 2){
                flag = 1;
            }
        }
    }

    if(flag == 0) cout <<  "No" << endl;
    else cout << "Yes" << endl;
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