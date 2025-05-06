#include<bits/stdc++.h>

using namespace std;


//O(n^2);
class Solution {
    public:
        int maxLengthBetweenEqualCharacters(string s) {
            int maxDistance = -1;
    
            // Iterate over all pairs of indices (left, right) in the string.
            for (int left = 0; left < s.size(); left++) {
                for (int right = left + 1; right < s.size(); right++) {
                    // Check if characters at indices left and right are equal.
                    if (s[left] == s[right]) {
                        // Update the maximum distance between equal characters.
                        maxDistance = max(maxDistance, right - left - 1);
                    }
                }
            }
    
            return maxDistance;
        }
    };

//using last track hashmap;

class Solution {
    public:
        int maxLengthBetweenEqualCharacters(string s) {
            unordered_map<char, int> charmap;
            int maxDiff = 0;
    
            for (unsigned index = 0; index < s.length(); ++index) {
                char c = s[index];
    
                unordered_map<char, int>::iterator it = charmap.find(c);
                if (it != charmap.end()) {
                    int diff = index - it->second;
                    if(maxDiff < diff)
                        maxDiff = diff;
                    continue;
                    
                }
                charmap[c] = index;
            }
            return maxDiff - 1;
        }
    };


int main(){




    return 0;
}