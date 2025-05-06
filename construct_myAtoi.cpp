#include<bits/stdc++.h>
#include <iostream>
#include <string>


//https://leetcode.com/problems/string-to-integer-atoi/description/
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        // stringstream ss(s);
        // int num = 0;
        // ss>>num;
        // return num;
        long ans = 0;
        int sign = 1;
        int i=0;
        //space trim
        while(s.size()>i && s[i]==' ')i++;
        if(i==s.size()) return 0;
       
       //sign 
       if(s[i]=='-'){sign=-1;i++;}
       else if(s[i]=='+') i++;

       //number
       while(i < s.size() && isdigit(s[i])){
           ans = ans*10+(s[i]-'0');

           //overflow;
           if(sign*ans>INT_MAX) return INT_MAX;
           if(sign*ans<INT_MIN) return INT_MIN;
           i++;
       }
       return (int)(sign*ans);
        
    }
};


int main(){




    return 0;
}