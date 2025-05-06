#include<bits/stdc++.h>

using namespace std;

//https://leetcode.com/problems/relative-ranks/description/
class Solution {
    public:
        vector<string> findRelativeRanks(vector<int>& score) {
            vector<int> sortedScore = score;
            sort(sortedScore.begin(), sortedScore.end(), greater<int>());
            vector<string> medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
            unordered_map<int, string> rankMapping;
            for (int i = 0; i < sortedScore.size(); i++) {
                if (i < 3) {
                    rankMapping[sortedScore[i]] = medals[i];
                } else {
                    rankMapping[sortedScore[i]] = to_string(i + 1);
                }
            }
            vector<string> result;
            for (int s : score) {
                result.push_back(rankMapping[s]);
            }
            return result;
        }
    };
    class Solution {
        public:
            vector<string> findRelativeRanks(vector<int>& score) {
                
                vector<string> rank;
                priority_queue<pair<int,int>>pq;
                for(int i=0;i<score.size();++i){
                    pq.push({score[i],i});
                }
                int place = 1;
                while(!pq.empty()){
                    int originalIDX = pq.top().second;
                    pq.pop();
                    if(place==1)rank[originalIDX] = "Gold Medal";
                    else if(place ==2) rank[originalIDX] = "Silver Medal";
                    else if(place==3) rank[originalIDX] = "Bronze Medal";
                    else rank[originalIDX] = to_string(place);
                    place++;
                }
                return rank;
            }
           
        };
        class Solution {
            private:
                int findMax(vector<int>& score) {
                    int maxScore = 0;
                    for (int s : score) {
                        if (s > maxScore) {
                            maxScore = s;
                        }
                    }
                    return maxScore;
                }
            public:
                vector<string> findRelativeRanks(vector<int>& score) {
                    int N = score.size();
            
                    // Add the original index of each score to the array
                    // Where the score is the key
                    int M = findMax(score);
                    vector<int> scoreToIndex(M + 1, 0);
                    for (int i = 0; i < N; i++) {
                        scoreToIndex[score[i]] = i + 1;
                    }
            
                    const vector<string> MEDALS = {"Gold Medal", "Silver Medal", "Bronze Medal"};
            
                    // Assign ranks to athletes
                    vector<string> rank(N);
                    int place = 1;
                    for (int i = M; i >= 0; i--) {
                        if (scoreToIndex[i] != 0) {
                            int originalIndex = scoreToIndex[i] - 1;
                            if (place < 4) {
                                rank[originalIndex] = MEDALS[place - 1];
                            } else {
                                rank[originalIndex] = to_string(place);
                            }
                            place++;
                        }
                    }
                    return rank;
                }
            };

int main(){




    return 0;
}