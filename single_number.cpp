// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one

#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int x=0;
    for(auto i:nums) x=(x^i);
    return x;
}

int main(){
    int n; 
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<"Single occuring element is - "<<singleNumber(nums)<<endl;
    return 0;
}
