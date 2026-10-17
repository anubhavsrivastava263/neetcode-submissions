class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        priority_queue<pair<int,int>> maxheap;
        for(auto [num,count]:mp){
            maxheap.push({count,num});
        }
        while(k>0 && !maxheap.empty()){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
            k--;

        }
        return ans;
        
        
    }
};
