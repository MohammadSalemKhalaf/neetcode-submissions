class Solution {
public:
bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> frec;
        for (int x: nums) {
                frec[x]++;
        }
        for (auto x: frec) {
                if (x.second > 1)
                        return true;
                        
        }
        return false;
}
};