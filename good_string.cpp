#include<bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/largest-3-same-digit-number-in-string/

class Solution {
    public:
        string largestGoodInteger(string num) {
            int n=num.size();
          
            char maxch=' ';
            bool c=false;
            for(int i=2;i<n;i++){
                if(num[i]==num[i-1]&&num[i]==num[i-2]){
                    if(maxch<num[i]) maxch=num[i];
                    c = true;
                }
            }
            if(!c) return "";
            
            
            return string(3,maxch);
        }
    };

int main(){

    string num = "688817779";
    char maxch = '0';
    string s="";
    for(int i=2;i<num.size();i++){
        if(num[i]==num[i-1]&&num[i]==num[i-2]){
            if(maxch<num[i]){
                maxch=num[i];
            }
        }
    }
    for(int i=0;i<3;i++){
        s+=maxch;
    }
    cout<<s;






    return  0;
}