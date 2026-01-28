#include<bits/stdc++.h>
using namespace std;

class Solution {
    int lower_Bound(vector<int>&arr, int target){
        int l = 0, r = arr.size() -1;
        int idx = -1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(arr[mid] >= target){
                if(arr[mid] == target)
                    idx = mid;
                r = mid -1;
            }
            else{
                l = mid + 1;
            }
        }
        return idx;
    }

    int upper_Bound(vector<int>&arr, int target){
        int l = 0, r = arr.size() -1;
        int idx = -1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(arr[mid] > target){
                idx = mid;
                r = mid -1;
            }
            else{
                l = mid + 1;
            }

        }
        return idx;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lower_Bound(nums, target);
        if (first == -1) return {-1, -1};

        int ub = upper_Bound(nums, target);
        int last = (ub == -1) ? nums.size() - 1 : ub - 1;

        return {first, last};
    }
};