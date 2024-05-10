#include <iostream>
#include <unordered_map>
#include <vector>
class Solution {
public:
  int repeatedNTimes(std::vector<int> &nums) {
    std::unordered_map<int, int> xdd;
    for (int i = 0; i < nums.size(); i++) {
      xdd[nums[i]]++;
    }
    int n = nums.size();
    for (auto it = xdd.begin(); it != xdd.end(); ++it) {
      if (it->second == n / 2) {
        return it->first;
      }
    }
    return 0;
  };
};
