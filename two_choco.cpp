#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
        int buyChoco(vector<int>& ch, int m) {
            priority_queue<int,vector<int>,greater<int>> pq(begin(ch),end(ch));
            int mn = pq.top(); pq.pop();
            int mnn = pq.top();
            if(mn+mnn>m) return m;
            return (m-(mn+mnn));
    
    
        }
    };
//https://leetcode.com/problems/buy-two-chocolates/description/
int main(){
     
    return 0;
}