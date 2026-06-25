class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>> mp;
     vector<vector<string>> output;
     for(string s : strs){
        string value = s;
        sort(s.begin(),s.end());
        mp[s].push_back(value);
     }
     for(auto v : mp){
        output.push_back(v.second);
     }
     return output;
    }
};
