#include<unordered_map>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
		if (s.size() != t.size()) return false;
		unordered_map<char, int> charCount;
		for (char x : s) {
			charCount[x]++;
		}
		for (char x : t) {
			charCount[x]--;
			if (charCount[x] < 0)return false;
		}
		return true;
    }
};
