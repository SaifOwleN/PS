// SOLVED
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
class Solution {
public:
  std::vector<std::vector<std::string>>
  groupAnagrams(std::vector<std::string> &strs) {
    std::vector<std::vector<std::string>> answer;
    std::unordered_map<std::string, std::vector<std::string>> xdd;

    for (int i = 0; i < strs.size(); i++) {
      std::string str = strs[i];
      std::sort(str.begin(), str.end());
      xdd[str].push_back(strs[i]);
    }
    for (auto i : xdd) {
      answer.push_back(i.second);
    }
    return answer;
  }
};
