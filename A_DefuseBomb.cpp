#include<bits/stdc++.h>
using namespace std;


class Solution {
private:

    void solve(vector<int>& nums, int k, vector<int>& ans){
        int n = nums.size()/2;

        if(k > 0){
            int l = 1, r = k;
            int sum = 0;

            for(int i=l;i<=r;i++) sum += nums[i];

            for(int i=0;i<n;i++){
                ans[i] = sum;

                sum -= nums[l];
                l++;
                r++;
                sum += nums[r];
            }
        }

        else{
            k = abs(k);
            int l = n - k, r = n - 1;
            int sum = 0;

            for(int i=l;i<=r;i++) sum += nums[i];

            for(int i=0;i<n;i++){
                ans[i] = sum;

                sum -= nums[l];
                l++;
                r++;
                sum += nums[r];
            }
        }
    }

public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();

        vector<int> arr;

        for(int num : code) arr.push_back(num);
        for(int num : code) arr.push_back(num);

        vector<int> ans(n,0);

        if(k == 0) return ans;

        solve(arr, k, ans);

        return ans;
    }
};