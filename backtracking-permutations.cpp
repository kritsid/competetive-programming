Given a collection of numbers, return all possible permutations.

Example:

[1,2,3] will have the following permutations:

[1,2,3]
[1,3,2]
[2,1,3] 
[2,3,1] 
[3,1,2] 
[3,2,1]

void solve(vector<vector<int>>&v, vector<bool>&visited,vector<int>&per,vector<int>&arr){
    if(per.size()==arr.size()){
        v.push_back(per);
        return ;
    }
    for(int i=0;i<arr.size();i++){
        if(visited[arr[i]]==false){
            per.push_back(arr[i]);
            visited[arr[i]]=true;
            solve(v,visited,per,arr);
            visited[arr[i]]=false;
            per.pop_back();
        }
    }
}
vector<vector<int> > Solution::permute(vector<int> &arr) {
    vector<vector<int> >v;
   vector<bool>visited(arr.size(),false);
   vector<int>per;
   solve(v,visited,per,arr);
   return v;
}
