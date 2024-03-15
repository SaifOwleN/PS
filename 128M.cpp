// NOT SOLVED :(
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  int longestConsecutive(vector<int> &nums) {
    unordered_map<int, int> xdd;
    int max = 0;
    int min = 0;
    xdd.count(1);
    for (int i : nums) {
      xdd[i]++;
      i < min ? min = i : min = min;
      i > max ? max = i : max = max;
    }
    int seq = 0;
    int temp = 0;
    cout << min << " " << max;
    for (int i = min; i <= max; i++) {
      cout << i << ":" << xdd[i] << " ";

      if (xdd[i] > 0) {
        temp++;
      } else {
        if (temp > seq) {
          seq = temp;
          temp = 0;
        }
      }
    }
    temp > seq ? seq = temp : seq = seq;
    return seq;
  }
};
