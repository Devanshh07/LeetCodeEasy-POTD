#include<bits/stdc++.h>

using namespace std;



int main(){
 vector<vector<int>> nums{{1,2,3},{4,5,6},{7,8,9}};
 for(int i=0;i<nums[0].size();i++){
    for(int j=0;j<nums.size();j++){
        swap(nums[i],nums[j]);
    }
 }



    return 0;
}