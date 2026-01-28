#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, z;
    cin >> x >> y >> z;
    int count = 0;
    while(true){
        if(x > 0 && z > 0){
            x--;
            z--;
            count++;
        }else if(y >= 2){
            y -= 2;
            count++;
        }
        else{
            break;
        }
    }
    cout << count << endl;
}

int main() {
	int tc;
	cin >> tc;
	
	while(tc--){
	    solve();
	}

}
