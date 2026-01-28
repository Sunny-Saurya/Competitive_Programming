#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int l = 0, r = arr.size()-1;
        int idx = arr.size();
        
        while(l <= r){
            int mid = l + (r - l)/2;
            if(arr[mid] >= target){
                idx = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return idx;
    }
};
