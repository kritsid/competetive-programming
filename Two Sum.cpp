class Solution {
public:
vector twoSum(vector& nums, int target) {
vector ans;
unordered_map<int,int>m;
int a=nums.size();
for(int i=0;i<a;i++){
if(m.find(target-nums[i])!=m.end()){
ans.push_back(i);
ans.push_back(m[target-nums[i]]);
return ans;
}
else{
m[nums[i]]=i;
}
