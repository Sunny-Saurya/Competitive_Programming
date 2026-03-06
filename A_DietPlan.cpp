#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dietPlanPerformance(vector<int>& nums, int k, int lower, int upper) {
        
        int l = 0, r = 0, sum = 0, n = nums.size();
        int score = 0;

        while(r < n){
            sum += nums[r];

            if(r - l + 1 == k){
                if(sum > upper){
                    score += 1;
                }
                else if(sum < lower){
                    score -= 1;
                }

                sum -= nums[l];
                l++;
            }

            r++;
        }

        return score;
    }
};

int main() {

    vector<int> calories = {3,2};
    int k = 2;
    int lower = 0;
    int upper = 1;

    Solution obj;

    int result = obj.dietPlanPerformance(calories, k, lower, upper);

    cout << result << endl;

    return 0;
}