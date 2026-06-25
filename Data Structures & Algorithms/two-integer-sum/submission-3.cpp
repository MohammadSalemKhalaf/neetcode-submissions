class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int result = target - nums[i];
            if(mp.count(result))
                return { mp[result],i};  
                mp[nums[i]]=i;
        }
            return {};
    }
};

            // time complexity
            // O(n^2) nisted loop
            // O(n) hash map