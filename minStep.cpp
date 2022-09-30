source: INTERVIEW BIT
problem statement:
Problem Description

You are in an infinite 2D grid where you can move in any of the 8 directions

 (x,y) to 
    (x-1, y-1), 
    (x-1, y)  , 
    (x-1, y+1), 
    (x  , y-1),
    (x  , y+1), 
    (x+1, y-1), 
    (x+1, y)  , 
    (x+1, y+1) 


You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.


solution:

int Solution::coverPoints(vector<int> &a, vector<int> &b) {
    int diff1=0,diff2=0,ans=0;
    for(int i=1;i<a.size();i++){
        diff1 = abs(a[i]-a[i-1]);
        diff2 = abs(b[i] - b[i-1]);
        ans+=max(diff1,diff2);
    }
    return ans;
}
