#include<bits/stdc++.h>

using namespace std;
class Solution {
    public:
        int minOperations(string s) {
    
           int n = s.size();
           int operations = 0;
    
           for(int i=1; i<n; i++)
           {
              if(s[i]==s[i-1])
              {   
    
                operations++;
    
                if(s[i-1]=='0')
                     s[i] = '1' ; 
                
                else
                    s[i] = '0' ;
    
              }
           }
    
           return min(operations , n-operations);
        }
    };
int main(){
  string s = "1111";
  int start_zero = 0;
  int start_one = 0;
  string zero = "0101";
  string one  = "1010";
  for(int i=0;i<s.size();i++){
           if(i&1){
            if(s[i]=='1'){
                start_one++;
             } else{
                start_zero++;
             }
           } else{
             if(s[i]=='0'){
                start_one++;
             } else{
                start_zero++;
             }
           }
  }


    return  0;
}