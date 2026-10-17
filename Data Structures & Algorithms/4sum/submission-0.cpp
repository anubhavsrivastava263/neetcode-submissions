class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int  k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        if(nums[i]+nums[j]+0LL+nums[k]+nums[l]==target){
                            s.insert({nums[i],nums[j],nums[k],nums[l]});
                        }
                    }
                }
            }
        }
        for(auto quadrelts:s){
            ans.push_back(quadrelts);
        }
        return ans;
        
    }
};