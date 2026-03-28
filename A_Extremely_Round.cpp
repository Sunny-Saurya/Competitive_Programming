#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int temp = n;
    int noOfDigit = 0;

    while(temp > 0){
        noOfDigit++;
        temp = temp / 10;
    }

    int ans = (noOfDigit - 1) * 9;

    int firstDigit = n;
    while(firstDigit >= 10){
        firstDigit /= 10;
    }

    ans += firstDigit;

    cout << ans << endl;
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