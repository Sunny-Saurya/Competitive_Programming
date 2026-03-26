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

    if(countTwos % 2 != 0){
        cout << -1 << endl;
        return;
    }
    long long res = 1;
    for(int num : arr){
        res *= num;
    }
    long long store = res;
    long long pro = 1;
    for(int i = 0 ; i < n; i++){
        pro *= arr[i];
        res /= arr[i];

        if(pro == res){
            cout << i+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
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