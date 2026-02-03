#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i = 0;
        bool res = false;
        int n = nums.size();

        if(n < 4) return false;

        while(i+1 < n && nums[i] < nums[i+1]) i++;
        if(i == 0) return false;

        int peak = i;
        while(i+1 < n && nums[i] > nums[i+1]) i++;
        if(i == peak) return false;
        
        int valley = i;
        while(i+1 < n  && nums[i] < nums[i+1]) i++;
        if(i == valley) return false;

        return i == n - 1;
    }
};