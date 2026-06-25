class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> maxHeap;
        vector<int> result;
        unordered_map<int,int> freq;

        for(int num : nums){
            freq[num]++;
        }

        for(auto f : freq){
            maxHeap.push({f.second , f.first});
        }

        for (int i=0;i<k;i++){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

            return result;
    }
};
