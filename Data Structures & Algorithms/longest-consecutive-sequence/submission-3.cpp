class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        vector<int> v;
        if(nums.size() == 1)return 1;
        else{
        for (int num : nums) {
            set.insert(num);
        }
        for (int num : set) {
            if (set.size() == 1)return 1;
            if (set.count(num+1)||set.count(num-1)) {
                v.push_back(num);
            }
        }
        cout << "[";

        for (int num : v) {
            cout<< num << " ";
        }
        cout << "]";
        cout << endl;
        return v.size();
        }
}
};
