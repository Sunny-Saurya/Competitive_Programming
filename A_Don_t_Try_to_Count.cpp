#include <bits/stdc++.h>
using namespace std;

bool is_Substring(string &x, string &s) {
    return x.find(s) != string::npos;
}

void solve() {
    int n, m;             
    cin >> n >> m;        

    string x;
    cin >> x;
    string s;
    cin >> s;

    int operation = 0;
    string result = x;

    for (int i = 0; i <= 10; i++) {
        if (is_Substring(result, s)) {
            cout << operation << "\n";
            return;
        }
        result += result;
        operation++;
    }

    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}
