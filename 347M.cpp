
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> xdd, ddx;
    for (int i : nums) {
      xdd[i]++;
    };
    vector<int> answer;

    for (auto &i : xdd) {
      ddx[i.second] = i.first;
    }
    return ddx[k];

    return {};
  }
};
