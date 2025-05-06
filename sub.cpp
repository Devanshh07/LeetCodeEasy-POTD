#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int cnt = 0;
            for (auto& num : nums) {
                int evn = num == 0 ? 1 : floor(log10(num)) + 1;
                if (!(evn & 1)) {
                    cnt++; 
                }
            }
            return cnt;
        }
    };

int main(){
 Solution s;
 vector<int> nums = {1,2,3};
 vector<int> nums2 = {1,2,4};
 cout<<s.findNumbers(nums);


    return 0;
}