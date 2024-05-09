
#include <algorithm>
#include <deque>
#include <functional>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> findRelativeRanks(vector<int> &score) {
    unordered_map<int, string> answer;
    for (int i = 0; i < score.size(); i++) {
      answer[score[i]] = to_string(i + 1);
    }
    sort(score.begin(), score.end(), greater<int>());

    for (int i = 0; i < score.size(); i++) {
      if (i == 0) {
        answer[score[i]] = "Gold Medal";
      } else if (i == 1) {
        answer[score[i]] = "Silver Medal";
      } else if (i == 2) {
        answer[score[i]] = "Bronze Medal";
      } else {
        answer[score[i]] = to_string(i + 1);
      }
    }
    std::vector<std::string> result;
    for (const auto &pair : answer) {
      result.push_back(pair.second);
    }
    reverse(result.begin(), result.end());
    return result;
  }
};
