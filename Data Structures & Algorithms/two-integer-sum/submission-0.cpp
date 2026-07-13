class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> tmap;
        for(int i = 0;i<=n;i++)
        {
            int diff = target - nums[i];
            if(tmap.find(diff) != tmap.end())
            {
                return{tmap[diff],i};
            }
            tmap.insert({nums[i],i});
        }
        return {};
    }
};
