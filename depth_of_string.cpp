#include<bits/stdc++.h>

using namespace std;
//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
class Solution {
    public:
        int maxDepth(string s) {
    
          string ls =   "using stack";
            // stack<char>st;
            // int res = 0;
            // for(auto &ch:s){
            //     if(ch=='('){
            //         st.push('(');
            //     } else if(ch==')'){
            //         st.pop();
            //     }
            //     res = max(res,(int)st.size());
            // }
            // return res;
            int opnB = 0;
            int res = 0;
            for(auto &ch:s){
    
                if(ch=='('){
                    opnB++;
                } else if(ch==')'){
                    opnB--;
                }
                res = max(res,opnB);
            }
            return res;
        }
    };
int main(){

}