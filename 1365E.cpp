// SOLVED
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
    map<int, int> xdd;
    map<int, int> xdd2;
    for (int i : nums) {
      xdd[i]++;
    }
    xdd2 = xdd;
    int x = 0;
    vector<int> answer;

    for (int i : nums) {
      answer.push_back(xdd[i]);
    }
    return answer;
  };
};

// 1 1 2 1 2 4
// 0 1 2 4 5 7
// 1 2 4 5 7 11
