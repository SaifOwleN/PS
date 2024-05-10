// NOT SOLVED
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
  bool equalFrequency(string word) {
    unordered_map<char, int> xdd;
    map<int, string> aloo;
    for (char i : word) {
      xdd[i]++;
    };
    for (auto i = xdd.begin(); i != xdd.end(); i++) {
      aloo[i->second] += i->first;
      cout << aloo[i->second] << " ";
    }
    if (aloo.size() != 2 || aloo.end()->second.size() != 1) {
      return false;
    }
    return true;
  }
};
