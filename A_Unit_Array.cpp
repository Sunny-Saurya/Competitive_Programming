#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;

    vector<long long>arr(n);
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    long long countNeg = 0;
    long long countPos = 0;

    for(int num : arr){
        if(num < 0){
            countNeg++;
        }
        else{
            countPos++;
        }
    }

    long long operation = 0;

    while(countPos < countNeg || countNeg % 2 == 1){
        operation++;
        countPos++;
        countNeg--;
    }
    cout << operation << endl;

    
    
    
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