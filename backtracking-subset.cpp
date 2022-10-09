/*Given a set of distinct integers, S, return all possible subsets.
  Example :

If S = [1,2,3], a solution is:

[
  [],
  [1],
  [1, 2],
  [1, 2, 3],
  [1, 3],
  [2],
  [2, 3],
  [3],
]
*/

void solve(vector<bool>&visited, vector<int>arr,vector<int>&v,vector<vector<int>>&ans,int index){
    // if(v.size()==arr.size()){
        ans.push_back(v);
        // return;
    // }
    for(int i=index;i<arr.size();i++){
            v.push_back(arr[i]);
            solve(visited,arr,v,ans,i+1);
            v.pop_back();
    }
}
vector<vector<int> > Solution::subsets(vector<int> &arr) {
     vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    if(arr.size()==0){
        ans.push_back({});
        return ans;
    }
    
    vector<bool>visited(arr.size(),false);
    vector<int>v;
   
    // ans.push_back({});
    solve(visited,arr,v,ans,0);
    return ans;
}
