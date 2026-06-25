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
		
