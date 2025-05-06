#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
        vector<vector<int>> construct2DArray(vector<int>& nums, int m, int n) {
            vector<vector<int>> ans(m,vector<int>(n));
            if(nums.size()!=m*n) return{};
            for(int i=0;i<nums.size();i++){
                int r = i/n;
                int c = i%n;
                ans[r][c] = nums[i];
            }
            return ans;
        }
    };
int main(){



    return 0;
}