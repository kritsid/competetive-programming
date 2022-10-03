//Given a sorted array A and a target value B, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
Solution:
int binary(int s, int e , int x, vector<int>arr){
    if(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return binary(s,mid-1,x,arr);
        }
        else{
            return binary(mid+1,e,x,arr);
        }
    }
    return s;
}
int Solution::searchInsert(vector<int> &arr, int x) {
    
    // int a = binary(0,arr.size()-1,b,arr);
    // return a;
    int s=0;
    int e = arr.size()-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return s;
}
