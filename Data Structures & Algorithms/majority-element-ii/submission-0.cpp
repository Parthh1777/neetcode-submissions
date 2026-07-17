class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        int n = nums.size();
        vector<int>res;
        for(int i =0;i<nums.size();i++)
        {
            count[nums[i]]++;
            if(count[nums[i]] == (n/3)+1) 
            {
                res.push_back(nums[i]);
            }
        }
        return res;        
    }
};