PS: Given a list of non negative integers, arrange them such that they form the largest number.
soln:
bool compare(int v1, int v2){
    string s1 = to_string(v1);
    string s2 = to_string(v2);
    return s1+s2>s2+s1;
}
string Solution::largestNumber(const vector<int> &ar) {
    string s="";
    vector<int>arr(ar);
    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<arr.size();i++){
       s+=to_string(arr[i]);
    }
    if(s[0]=='0')
    return "0";
    return s;
}
