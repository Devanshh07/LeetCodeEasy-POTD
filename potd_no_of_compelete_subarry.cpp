#include<bits/stdc++.h>

using namespace std;

class solution{
    public:

    int compelete(vector<int> nums){
        vector<vector<int>> dist;
        unordered_set<int>st(begin(nums),end(nums));
        int distinct= st.size();
        int cnt=0;
        //cout<<distinct;
        int n = nums.size();
        for(int i=0;i<n;i++){
            vector<int> sub;
            for(int j=i;j<n;j++){
              sub.push_back(nums[j]);
            }
            dist.push_back(sub);
        }
        for(auto &it: dist){
            for(auto &itt: it){
                cout<<itt<<endl;
            }
        }

    }

};

int main(){
   vector<int> nums={1,2,3,4,5};
   solution s;
   s.compelete(nums);


    return  0;
}