#include<bits/stdc++.h>

using namespace std;


//https://leetcode.com/problems/subsets/description/
class subset{
    public:
    vector<vector<int>> res;
    void solve(vector<int> &nums,int i,vector<int> temp){
              if(i>=nums.size()){
                res.push_back(temp);
                return ;
              }
              //two case -> Take &explore
              temp.push_back(nums[i]);
              solve(nums,i+1,temp);
              //not take
              temp.pop_back();
              solve(nums,i+1,temp);
    }
    vector<vector<int>> generateSubset(vector<int> &nums){
        vector<int> temp;
        solve(nums,0,temp);
        return res;
    }
};

int main(){


    return 0;
}