#include <unordered_map>
#include <vector>
class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> aloo;
    for (int i = 0; i < nums.size(); i++) {
      int diff = target - nums[i];
      if (aloo.count(diff))
        return {i, aloo[diff]};
      aloo[nums[i]] = i;
    }
    return {};
  }
};
