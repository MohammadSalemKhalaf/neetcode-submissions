class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        vector<int> v;
        if (nums.size() == 1)return 1;
        else{
            for (int num : nums) {
                set.insert(num);
            }
            int i =1;
            for (int num : set) {
                if (set.size() == 1)return 1;
                else if (set.count(num+1)||set.count(num-1)) {
                    v.push_back(num);
                }
                else if (i==set.size()&& v.size()==0 )return 1;
                i++;
            }
            return v.size();
        }
}

};
