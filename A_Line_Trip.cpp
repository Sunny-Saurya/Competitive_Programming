#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,p;
    cin>> n >> p;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxDist = arr[0];
    for(int i = 1; i < n; i++){
        int diff = abs(arr[i] - arr[i-1]);
        maxDist = max(maxDist, diff);

    }

    int temp = 2* abs(arr[n-1]-p);
    maxDist = max(maxDist, temp);
    cout << maxDist << endl;
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