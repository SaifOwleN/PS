// SOLVED
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
  int numJewelsInStones(string jewels, string stones) {
    unordered_map<char, int> stonesCount;
    for (char i : stones) {
      stonesCount[i]++;
    }
    int answer = 0;

    for (char i : jewels) {
      if (stonesCount[i])
        answer += stonesCount[i];
    }
    return answer;
  }
};
