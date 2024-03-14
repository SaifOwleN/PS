// NOT SOLVED (Using Prefix sum)
#include <vector>
using namespace std;
class Solution {
public:
  int numSubarraysWithSum(vector<int> &nums, int goal) {
    int left = 0;
    int ans = 0;
    for (int i = 1; i < nums.size(); i++) {
      nums[i] += nums[i - 1];
      if (nums[i] > goal) {
        nums[i] -= nums[left];
        left++;
      }
      if (nums[i] == goal) {
        ans++;
      }
    }
    if (nums[nums.size() - 1] == goal) {
      ans++;
    }
    return ans;
  }
};
