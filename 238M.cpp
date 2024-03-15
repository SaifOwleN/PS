// SOLVED
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int size = nums.size();
    vector<int> xdd(size, 1);
    vector<int> ddx(size, 1);
    int left = 1;
    int right = 1;
    for (int i = 1; i < size; i++) {
      xdd[i] = xdd[i - 1] * nums[i - 1];
    }

    for (int i = size - 2; i >= 0; --i) {
      ddx[i] = ddx[i + 1] * nums[i + 1];
    }

    vector<int> result;
    for (int i = 0; i < size; ++i) {
      result[i] = ddx[i] * xdd[i];
    }
    return result;
  }
};

// nums= 1 2 3 4 5
// xdd = 1 2 6 24 120
// nums[i]
