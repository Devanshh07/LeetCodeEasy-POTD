#include<bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/assign-cookies/description/

int main(){
    vector<int> g{10,9,8,7};
    vector<int> s{5,6,7,8};
    sort(begin(g),end(g)); sort(begin(s),end(s));

    int i=0;
    int j=0;
    while(i<=g.size()&&j<=s.size()){
        if(g[i]<=s[j]){
          i++;
          j++;
        } else{
        j++;
        }
    }
  cout<<i;




    return  0;
}