#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int temp = a, temp1 = b;
    if(x == a && b == y){
        cout << 0 << endl;
        return;
    }

    if(y < b){
        cout << -1 << endl;
        return;
    }

    int move = y- b;

    a += move;

    if(a < x){
        cout <<-1<< endl;
        return;
    }

    move += (a - x);

    cout << move << endl;
    
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