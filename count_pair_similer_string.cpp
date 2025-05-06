#include<bits/stdc++.h>

using namespace std;

class solution{
    public:
    int pair(vector<string> word){
        class Solution {
            public:
                int similarPairs(vector<string>&word ) {
                    vector<string> unq;
                    int cnt =0;
                    for(auto &w: word){
                        set<char>st;
                        for(auto &ch:w){
                            st.insert(ch);
                        }
                        string s="";
                        for(auto &c:st){
                            s+=c;
                        }
                        unq.push_back(s);
                    }
                    for(int i=0;i<unq.size();++i){
                        for(int j=i+1;j<unq.size();++j){
                            if(unq[i]==unq[j])cnt++;
                        }
                    }
                    return cnt;
                }
            
            };
    }
};



int main(){





    return 0;
}