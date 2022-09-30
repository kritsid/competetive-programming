PS:
Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.
  
  My Soln:
int Solution::repeatedNumber(const vector<int> &arr) {
  
    int n = arr.size();
    vector<int>v(n,0);
     for(int i=0;i<n;i++){
        // return 5;
        v[arr[i]]++;
        if(v[arr[i]]>1){
            return arr[i];
        }
    }
    return -1;
}
