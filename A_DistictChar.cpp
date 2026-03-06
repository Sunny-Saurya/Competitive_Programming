#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int countGoodSubstrings(string s) {
        int k = 3;
        int count = 0;
        for(int i = 2; i < s.size(); i++){
            int s1 = s[i];
            int s2 = s[i-1];
            int s3 = s[i-2];

            if(s1 != s2 && s2 != s3 && s3 != s1){
                count++;
            }
        }
        return count;
    }
};