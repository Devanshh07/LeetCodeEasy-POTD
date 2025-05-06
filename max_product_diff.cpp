#include<bits/stdc++.h>

using namespace std;


//https://leetcode.com/problems/maximum-product-difference-between-two-pairs/solutions/
//O(log.n)
class Solution {
    public:
        int maxProductDifference(vector<int>& nums) {
            priority_queue<int,vector<int>,greater<int>>pq(begin(nums),end(nums));
            priority_queue<int,vector<int>> pqq(begin(nums),end(nums));
    
            int min1 = pq.top(); pq.pop();
            int min2 = pq.top();
    
            int mx1 = pqq.top(); pqq.pop();
            int mx2 = pqq.top();
            return (mx1*mx2)-(min1*min2);
            
        }
    };

int  main(){




    return  0;
}