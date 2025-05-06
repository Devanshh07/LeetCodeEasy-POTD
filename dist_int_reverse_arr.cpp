#include<bits/stdc++.h>

using namespace std;

class Solutionn {
    public:
        int countDistinctIntegers(vector<int>& nums) {
            unordered_set<int> st;
            
            //rev+push in rev;
            int k = nums.size();
            int h  = k;
            for(int i=0;i<h;++i){
                int num = nums[i];
                st.insert(nums[i]);
    
                //reverse 
                int r = 0;
                if(num<10){continue;}
                else{
                while(num>0 ){
                    int l = num%10;
                    r = r*10 + l;
                    num =num/10;
                }
                }
                st.insert(r);
            }
            return st.size();
        }
    };
class Solution {
    public:
        int countDistinctIntegers(vector<int>& nums) {
            unordered_set<int>s;
            int n=nums.size();
            for(int i=0; i<n; i++){
                s.insert(nums[i]);
                string str = to_string(nums[i]);
                reverse(str.begin(),str.end());
                int rev = stoi(str);
                s.insert(rev);
            }
            return s.size();
        }
    };

int main(){
Solution s;
vector<int> nums = {1,13,10,12,31};
cout<<s.countDistinctIntegers(nums);



    return  0;
}