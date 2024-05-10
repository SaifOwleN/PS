// NOT SOLVED (Using Prefix sum)
#include <vector>
using namespace std;
class Solution {
public:
  int numSubarraysWithSum(vector<int> &nums, int goal) {
    int left = 0;
    int right = 0;
    int ans = 0;
    for (int i = 1; i < nums.size(); i++) {
      nums[right] += nums[left];
    }
    if (nums[nums.size() - 1] == goal) {
      ans++;
    }
    return ans;
  }
};
