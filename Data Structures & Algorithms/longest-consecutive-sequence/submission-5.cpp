class Solution {
public:
       int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        vector<int> v;
        int longest = 0;

        for (int num : set) {
            if (!set.count(num - 1)) {
                int currentLength = 1;
                int currentnumber = num ;
                while (set.count(currentnumber +1)) {
                    currentLength++;
                    currentnumber++;

                }
                longest = max(longest, currentLength);
            }

        }
        return longest;


}


};
