#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x,k;
    cin>> n>> x >> k;
    int mini = INT_MAX;
    for(int i = 0; i <= n; i += k){
        mini = min(mini, abs(x - i));
    }
    cout << mini << endl;
    
    
}

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    
    while(tc--){
        solve();
    }
}
