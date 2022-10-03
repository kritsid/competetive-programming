// problem: 
Given a matrix of integers A of size N x M in which each row is sorted.
Find an return the overall median of the matrix A.
  
//   Solution:

// // 1 7 1 1 3 3 3 3 3


int Solution::findMedian(vector<vector<int> > &arr) {
    //   find min and max of the array.
    // apply binary searh in range(min,max);
    // find num of elements<mid
    // if val == n*m/2
    // return
    int n = arr.size();
    int m= arr[0].size();
    //Step 1: find min of matrix:
    int mini = arr[0][0];
    for(int i=0;i<n;i++){
        if(arr[i][0]<mini){
            mini = arr[i][0];
        }
    }
    //Step 2: find max of matrix:
    int max = arr[0][m-1];
    for(int i=0;i<n;i++){
        if(arr[i][m-1]>max){
            max = arr[i][m-1];
        }
    }
    int vv = (n*m+1)/2;
    int start = mini;
    int end = max;
    // step 3 apply binary search
        while(start<end){
        int count=0;
    
        int mid = (start+end)/2;
        // upper_bound returns an iterator pointing to the first element in the range [first, last) that is greater than value,
        // or last if no such element is found. 
        // now, find num of values that are less than upper
    
        for(int i=0;i<n;i++)
            count += upper_bound(arr[i].begin(), arr[i].end(), mid)-arr[i].begin();
        
        if(count>=vv){
            end = mid;
        }
        else  start = mid+1;
        
    
    }
return end;
}
