#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    if(c % 2 == 1){
       if(b > a){
            cout << "Second" << endl;
        }else{
            cout << "First" << endl;
        }
    }
    else{
        if(a > b){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
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