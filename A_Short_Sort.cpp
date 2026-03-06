#include <bits/stdc++.h>
using namespace std;

void solve(){
    char a,b,c;
    cin >> a >> b>> c;
    int count = 0;
    if(a == 'a' && b == 'b' && c == 'c'){
        cout << "YES" << endl;
        return;
    }
    if(a !='a'){
        count++;
    }
    if(b !='b'){
        count++;
    }
    if(c !='c'){
        count++;
    }
    if(count < 3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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