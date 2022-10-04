class Solution {
    
    vector<vector<int>> result;
    void backtrack(vector<int> &temp,vector<int> nums,int index)
    {
        result.push_back(temp);
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[i-1])
            continue;
            temp.push_back(nums[i]);
            backtrack(temp,nums,i+1);
            temp.pop_back();
        }
    }
    
    public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
    vector<int> temp;
    backtrack(temp,nums,0);
    vector<vector<int>> res=result;
    result.clear();
    return res;
    }
};
