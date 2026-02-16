#include<bits/stdc++.h>
using namespace std;
pair<int,float> solve(vector<int>&arr, int k){

    int n = arr.size();
    int sum = 0;
    float avg = 0.0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }

    avg = (float)sum / k;
    int maxSum = sum;
    float maxAvg = avg;

    int l = k;

    while(l < n){
        sum += arr[l];
        sum -= arr[l-k];
        avg = (float)sum / k;
        maxSum = max(sum, maxSum);
        maxAvg = max(maxAvg, avg);
        l++;
    }

    return {maxSum, maxAvg};
}
int main(){
    vector<int>arr = {1,12,-5,-6,50,3};
    int k = 3;
    pair<int,float>ans = solve(arr, k);
cout << "MaxSum = " << ans.first << endl;
    cout << "MaxAvg = " << ans.second << endl;
}