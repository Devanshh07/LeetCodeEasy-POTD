#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int findMaxK(vector<int>& nums) {
            sort(begin(nums),end(nums));
            int res = -1;
            int i=0;
            int j = nums.size()-1;
            while(i<j){
                if(-nums[i]==nums[j]){
                    return nums[j];
                }
                if(-nums[i]<nums[j]){
                    j--;
                }
                else{
                    i++;
                }
            }
            return  res;
        }
    };
    class sol{
        public:
        int soll(vector<int> nums){
            int res  = -1;
            vector<int>arr(2001,0);
            for(int &num: nums){
                if(arr[-num+1000]==1){
                    res =  max(res,abs(num));
                }
                arr[num+1000] = 1;
            }
            return res;
        }
    };

int main(){
    vector<int> nums{-1,2,-3,3};
    



    return 0;
}