#include<bits/stdc++.h>

using namespace std;

//Range base IMPPPPPP
//https://leetcode.com/problems/count-symmetric-integers/
class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int count = 0;
            for (int i = low; i <= high; i++) {
                string s = to_string(i);
                if (s.size() % 2 == 0 && 
                accumulate(s.begin(), s.begin() + s.size()/2, 0) ==
                accumulate(s.begin() + s.size()/2, s.end(), 0))
                    count++;
            }
            return count;
        }
    };
class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int cnt = 0;
            for(int i = low ;i<=high;++i){
                if(i>=10 && i<=99 && i%11==0){
                    cnt++;
                } else if(1000<=i && i<=9999){
                    int f_dig = i/1000;
                    int s_dig = (i/100)%10;
                    int t_dig = (i/10)%10;
                    int l_dig = (i%10);
    
                    if((f_dig+s_dig)==(t_dig+l_dig)){
                        cnt++;
                    }
                }
            }
            return cnt;
        }
    };

int main(){




    return 0;
}