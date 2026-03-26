#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string str;
    cin >> str;
    int i = 0, j = n-1;
    while((str[i] == '0' && str[j] == '1') || (str[i] == '1' && str[j] == '0')){
        i++;
        j--;

        if(j < i){
            cout << 0 << endl;
            return;
        }
    }


    cout << j - i + 1<< endl;

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