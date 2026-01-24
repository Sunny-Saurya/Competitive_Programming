#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,p;
    cin>> n >> p;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int initialCapcityOfTank = arr[0];
    int temp = initialCapcityOfTank;
    int count = 1;
    
    for(int i = 1; i <= p; i++){
        if(arr[i] != i){
            count++;
            temp--;
            if(temp == 0){
                initialCapcityOfTank +=  count;
            }
        }
        else{
            initialCapcityOfTank = temp;
        }
    }
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