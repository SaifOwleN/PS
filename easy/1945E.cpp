#include <iostream>
#include <string>
class Solution {
public:
  int getLucky(std::string s, int k) {
    std::string xdd = "";
    for (int i = 0; i < s.size(); i++) {
      xdd += std::to_string(s[i] - 'a' + 1);
    };

    long long x = std::stoll(xdd);
    int z = 0;
    for (int i = 0; i < k; i++) {
      std::string add = std::to_string(x);

      for (int j = 0; j < add.size(); j++) {
        z += add[j];
      }
      std::cout << add << " " << z << " ";
      x = z;
    }
    std::cout << xdd;
    return x;
  }
};
