// SOLVED
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
    map<int, int> xdd;
    std::unordered_map<int, int> xdd2;
    for (int i : nums) {
      xdd[i]++;
    }
    int x = 0;
    vector<int> answer;
    for (auto i : xdd) {
      xdd2[i.first] += x;
      x = xdd2[i.first];
    }
    for (int i : nums) {
      answer.push_back(xdd2[i] - xdd[i]);
    }
    return answer;
  };
};

// 1 1 2 1 2 4
// 0 1 2 4 5 7
// 1 2 4 5 7 11
