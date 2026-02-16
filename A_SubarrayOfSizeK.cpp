#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr, int k){
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }

    int maxSum = sum;

    int l = k;

    while(l < n){
        sum += arr[l];
        sum -= arr[l-k];

        maxSum = max(sum, maxSum);

        l++;
    }

    return maxSum;
}
int main(){
    vector<int>arr = {100,200,300,400};
    int k = 3;
    cout << "The Max Sum of K Subarray is " << solve(arr, k) << endl;

}