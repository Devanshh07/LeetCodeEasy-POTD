#include<bits/stdc++.h>

using namespace std;

class Solution {
    public:
        bool canConstruct(string ran, string maz) {
            if(ran.size()>maz.size()) return false;
             unordered_map<char,int>mpM;
             unordered_map<char,int>mpR;
             for(auto &it: maz){
                mpM[it]++;
             }
             for(auto &it: ran){
                mpR[it]++;
             }
             //now check
             for(auto &it: mpR){
                char ch = it.first;
                int freq = it.second;
                if(!(mpM[ch]>=freq)) return false;
             }
             return true;
        }
    };
int main(){
    //"efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj"
 string s = "aa";
 string m = "bbb";
Solution ss;
cout<<ss.canConstruct(s,m);



    return  0;
}