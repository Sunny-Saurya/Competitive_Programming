#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr, int k, int x){

    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    int count = 0;
    if(sum > x){
        count++;
    }
    int l  = k;

    while(l < n){
        sum += arr[l];
        sum -= arr[l-k];

        if(sum > x){
            count++;
        }

        l++;
    }

    return count;
}

int main(){
    vector<int>arr = {2,5,1,8,2,9,1};
    int k = 3;
    int x = 10;

    cout << solve(arr, k, x) << endl;
}