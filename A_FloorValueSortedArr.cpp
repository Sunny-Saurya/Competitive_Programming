#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int l = 0, r = arr.size()-1;
        int idx = -1;
        
        while(l <= r){
            int mid = l + (r - l)/2;
            if(arr[mid] <= x){
                idx = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return idx;
    }
};
