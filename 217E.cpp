// SOLVED

#include <unordered_map>
#include <vector>
class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    std::unordered_map<int, int> xdd;
    int count = 0;
    for (int i : nums) {
      count++;
      xdd[i]++;
      if (xdd.size() < count) {
        return true;
      }
    }
    return false;
  }
};
