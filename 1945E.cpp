#include <iostream>
#include <string>
class Solution {
public:
  int getLucky(std::string s, int k) {
    std::string xdd = "";
    int sum;
    for (int i = 0; i < s.size(); i++) {
      xdd += std::to_string(s[i] - 'a' + 1);
    };
    std::cout << xdd;
    return 0;
  }
};
