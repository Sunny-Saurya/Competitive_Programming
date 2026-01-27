#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long mul = 1;
    int mini = *min_element(arr.begin(), arr.end());

    sort(arr.begin(), arr.end());
    for(int i = 1; i < arr.size(); i++){
        mul *= arr[i];
    }
    mul *= mini+1;
    cout << mul << endl;
    
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