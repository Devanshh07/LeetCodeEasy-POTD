#include<bits/stdc++.h>

using namespace std;
//https://leetcode.com/problems/isomorphic-strings/description/
class sol{
    public:
    bool check(string s,string t){
        unordered_map<char,char> mp1;
        unordered_map<char,char> mp2;
        int m = s.size();
        for(int i=0;i<m;++i){
            char ch1 = s[i];
            char ch2 = t[i];

            if(mp1.find(ch1)!=mp1.end()&&mp1[ch1]==ch2 || 
               mp2.find(ch2)!=mp2.end()&&mp2[ch2]==ch1){
                return false;
               }

        }
        return true;
    }
};
int main(){



    return 0;
}