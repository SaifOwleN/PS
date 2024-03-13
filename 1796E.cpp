#include <string>
using namespace std;
class Solution {
public:
  int secondHighest(string s) {
    int x = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] < 58)
        if (s[i] > x)
          x = s[i];
    }
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == x)
        s[i] = 'z';
    }
    x = -1;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] < 58)
        if (s[i] > x)
          x = s[i];
    }
    return x == -1 ? -1 : x - 48;
  }
};
