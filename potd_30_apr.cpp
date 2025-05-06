#include<bits/stdc++.h>

using namespace std;

class sol{
    public:
    int evenNum (vector<int>nums){
        int cnt = 0;
        for(auto &num: nums){
            int evn = num==0?0:floor(log10(num))+1;
            if(!(evn&1)){
                cnt++;
            }
        }
        return cnt;
    }
};

int main(){
 sol s;
 vector<int> nums = {12,345,2,6,7896};
 cout<<s.evenNum(nums);


    return 0;
}