source: InterviewBit
PS:
Problem Description

Given an index k, return the kth row of the Pascal's triangle.
Pascal's triangle: To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

Example:

Input : k = 3


Return : [1,3,3,1]

My Soln:

vector<int> Solution::getRow(int k) {
    vector<int>v;int c;
    if(k==0){ 
        v.push_back(1);
        return v;
    }
    for (int i = k; i <= k; i++) {
      for (int j = 0; j <= i; j++) {
        if (j == 0 || i == 0)
           c = 1;
        else
           c= c * (i - j + 1) / j;
           v.push_back(c);
      }
    }
    return v;
    
}
