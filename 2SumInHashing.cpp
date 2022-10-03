//2 Sum Problem in cpp
Qn: Given an array of integers, find two numbers such that they add up to a specific target number.

Soln:
int find_index(int val, vector<int>A, int n){
    for(int i=0;i<n;i++){
        if(A[i]==val){
            return i;
        }
    }    
}

vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int, int>map;
    int finalAns[2] = {-1,-1};
    int target = B;
    int n = A.size();
    for(int i=0;i<n;i++){
        int val = A[i];
        int key = target-A[i];
        if(map.find(key)==map.end()){
            map.insert({val,i});
        }
        else{
            int possAns[2] = {i, map[key]};
            if(possAns[1]<possAns[0]){
                int temp = possAns[0];
                possAns[0] = possAns[1];
                possAns[1] = temp;
            }
            if(finalAns[0]!=-1){
                if(finalAns[1]>possAns[1] || (finalAns[1]==possAns[1] && finalAns[0]>possAns[0])){
                    finalAns[0] = possAns[0];
                    finalAns[1] = possAns[1];
                }
            }
            else{
                finalAns[0] = possAns[0];
                finalAns[1] = possAns[1];
            }
            
        }
    }
    vector<int>ans;
    if(finalAns[0]!=-1){
        ans.push_back(finalAns[0]+1);
        ans.push_back(finalAns[1]+1);
    }
    return ans;
}
