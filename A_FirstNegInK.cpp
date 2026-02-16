#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&arr, int k){

    vector<int>ans;
    int n = arr.size();
    
    int  l = 0, r = k;

    while(r <= n){
        bool found = false;
        for(int i = l; i < r; i++){
            if(arr[i] < 0){
                ans.push_back(arr[i]);
                found = true;
                break;
            }
        }
        if(!found) ans.push_back(0);
        l++;
        r++;
    }

    return ans;

}

int main(){
    vector<int>arr = {-8,2,3,-6,10};
    int k = 2;

    vector<int>ans = solve(arr, k);
    for(int num: ans){
        cout << num << " ";
    }
}