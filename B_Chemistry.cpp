#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    vector<int>freq(26, 0);
    for(char ch : str){
        freq[ch-'a']++;
    }
    int oddFreq = 0;
    for(int i = 0; i < 26; i++){
        if(freq[i] % 2) oddFreq++;
    }
    if(oddFreq > k+1){
        cout << "NO\n";
        return;
    }
    else{
        cout << "YES\n";
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