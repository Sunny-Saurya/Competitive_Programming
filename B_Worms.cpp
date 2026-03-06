#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int juicyWorms;
    cin >> juicyWorms;

    vector<int>worms(juicyWorms);
    for(int i = 0; i < juicyWorms; i++){
        cin >> worms[i];
    }

    for(int i = 0; i < i < n; i++){
        for(int j = 0; j < juicyWorms; j++){
            if(arr[i] == arr[j]){
                cout << j + 1 <<endl;
                return;
            }
            else if(arr[i] < arr[j]){
                
            }

        }
    }

}