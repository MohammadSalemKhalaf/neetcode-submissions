//Given an integer array nums, return true if any value appears more than once in the array, 
// otherwise return false.
#include <vector>
#include <unordered_set>
class Solution{
	public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dublicate;
        for (int d : nums) {
            if (dublicate.count(d)) return true;
            dublicate.insert(d);
        }
        return false;
    }
        };
		
