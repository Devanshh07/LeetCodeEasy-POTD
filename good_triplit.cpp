#include<bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/count-good-triplets/description/

class Solution {
    public:
        int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
            int n=arr.size();
            int cnt=0;
            for(int i=0;i<=n-3;++i){
                for(int j=i+1;j<=n-2;++j){
                    if(abs(arr[i]-arr[j])<=a){
                        for(int k=j+1;j<=n-1;++j){
                            if(abs(arr[j]-arr[k])<=b &&abs(arr[i]-arr[k])){
                                cnt++;
                            }
                        }
                    }
                }
            }
            return cnt;
        }
    };
int main(){



    return  0;
}