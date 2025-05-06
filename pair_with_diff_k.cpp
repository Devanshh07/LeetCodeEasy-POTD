#include<bits/stdc++.h>


using namespace std;
class Solution {
    public:
        int countKDifference(vector<int>& nums, int k) {
            int cnt=0;
            // for(int i=0;i<nums.size()-1;++i){
            //     for(int j=i+1;j<nums.size();++j){
            //         if(abs(nums[i]-nums[j])==k)cnt++;
            //     }
            // }
            // return cnt;
            map<int,int> mpp;
            for(auto &it: nums){mpp[it]++;}
            for(auto &it:mpp){
                int y = it.first+k;
                if(mpp.find(y)!=mpp.end()){
                    cnt+=it.second*mpp[y];
                };
            }
            return cnt;
        }
    };

int main(){




    return  0;
}