#include<bits/stdc++.h>

using namespace std;
//https://leetcode.com/problems/count-of-matches-in-tournament/description/
class Solution {
    public:
        int numberOfMatches(int n) {
            return n-1;
            int match = 0;
            while(n>1){
                if(n&1){
                    match+= (n-1)/2;
                    n = (n-1)/2+1;
                } else{
                  match+= (n)/2;
                    n = (n/2);   
                }
            }
            
        }
    };
int main(){
    int n=7;
    int match=0,team=0,adv=0;
    int ans = 0;
    while(n!=1){
    if(n&1){
        match = (n-1)/2;
        ans+=match;
        n=(n-1)/2;
    } 
        match = (n)/2;

        n=n/2;
        
        ans+=match;
   
}
 cout<<match;

    return 0;
}