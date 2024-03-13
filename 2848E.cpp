#include <set>
#include <vector>
using namespace std;

class Solution {
public:
  int numberOfPoints(vector<vector<int>> &nums) {
    set<int, int> coord;
    for (int i = 0; i < nums.size(); i++) {
      for (int j = nums[i][0]; j < nums[i][1]; j++) {
        coord.insert(j);
      };
    }
    return coord.size();
  }
};
