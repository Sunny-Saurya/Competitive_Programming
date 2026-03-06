class Solution {
  public:
    int findMaxAverage(int nums[], int n, int k) {
        
        int l = 0, r = 0;
        int sum = 0;
        int maxSum = INT_MIN;
        int index = 0;

        while (r < n) {
            sum += nums[r];

            if (r - l + 1 == k) {

                if (sum > maxSum) {
                    maxSum = sum;
                    index = l;
                }

                sum -= nums[l];
                l++;
            }

            r++;
        }

        return index;
    }
};