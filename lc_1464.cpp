#include<bits/stdc++.h>


//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/
using namespace std;
class Solution {
    public:
        int maxProduct(vector<int>& nums) {
              
    
              //this approach O(nlogn);
            sort(nums.begin(),nums.end());
            int n=nums.size()-1;
            int last = nums[n]-1;
            int sL= nums[n-1]-1;
            return (last*sL);

            //this one take O(n);
            priority_queue<int> pq(begin(nums),end(nums));
            int m=pq.top()-1;
            pq.pop();
            int n=pq.top()-1;
            return (m*n);
        }
    };
    class Solution {
        public:
            int maxProduct(vector<int>& nums) {
                int max1 = INT_MIN;
                int max2 = INT_MIN;
        
                for (int num : nums) {
                    if (num >= max1) {
                        max2 = max1;
                        max1 = num;
                    } else if (num > max2) {
                        max2 = num;
                    }
                }
        
                return (max1 - 1) * (max2 - 1);
            }
        };

int main(){
    vector<int> nums{3,4,5,2};
    sort(begin(nums),end(nums));
    cout<<(nums[nums.size()-1])*(nums[nums.size()-2]-1);


    return 0;
}