#include<bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/description/
class Solution {
    public:
        bool makeEqual(vector<string>& words) {
            vector<int> vec(26,0);
            int n = words.size();
            for(int i=0;i<words.size();i++){
                for(int j=0;j<words[i].size();j++){
                      vec[words[i][j]-'a']++;
                }
            }
            for(auto &it: vec){
                if(it%n!=0){
                    return false;
                }
            }
            return true;
        }
    };
int main(){


    return  0;
}