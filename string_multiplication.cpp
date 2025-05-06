#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        string multiply(string num1, string num2) {
            if(num1=="0"||num2=="0") return "0";
            
            int n = num1.length();
            int m = num2.length();
            
            vector<int> res(n + m, 0);
            for (int i = n - 1; i >= 0; --i) {
                for (int j = m - 1; j >= 0; --j) {
                    // now multipl
                    res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                    res[i + j] += res[i + j + 1] / 10;
                    res[i + j + 1] %= 10; // formation
                }
            }
            int j = 0;
            while (res.size() > j && res[j] == 0) {
                j++;
            };
            string s = "";
            for (int i = j; i < res.size(); ++i) {
                s += to_string(res[i]);
            }
            return s;
        }
    
    };
int main()
{

    return 0;
}
