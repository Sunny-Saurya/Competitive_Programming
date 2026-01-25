#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    if((n - 1) % 3 == 0 || (n + 1) % 3 == 0){
        cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
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