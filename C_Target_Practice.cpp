#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n = 10;
     vector<string> arr(10);

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 'X'){
                if(i == 0 || i == 9 || j == 0 || j == 9){
                    sum += 1;
                }
                else if((i == 1 && j >= i) || (i == 8 && j <= 8) || (j == 8 && i <= 8) || (j == 1 && i <= 8)){
                    sum += 2;
                }
                else if((i == 2 && j >= i) || (i == 7 && j <= 7) || (j == 7 && i <= 7) || (j == 2 && i <= 7)){
                    sum += 3;
                }
                else if((i == 3 && j >= i) || (i == 6 && j <= 6) || (j == 6 && i <= 6) || (j == 3 && i <= 6)){
                    sum += 4;
                }
                else if((i == 4 && j >= i) || (i == 5 && j <= 5) || (j == 5 && i <= 5) || (j == 4 && i <= 5)){
                    sum += 5;
                }
            }
        }
        
    }
    cout << sum << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
}
