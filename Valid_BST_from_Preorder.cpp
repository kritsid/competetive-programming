Valid BST from Preorder

int Solution::solve(vector<int> &v) {
    // v = remove_duplicates(v);
    stack<int>stk;
    int temp=-1;
    int root= INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]<root){
            return 0;
        }
        while(!stk.empty() && v[i]>=stk.top() ){
            root=stk.top();
            stk.pop();
        }
        stk.push(v[i]);
            
    }
    return 1;
}
// Here we find the next greater element and after finding next greater, if we find a smaller element, then return false.

// Create an empty stack.
// Initialize root as INT_MIN.
// Do following for every element pre[i]
// If pre[i] is smaller than current root, return false.
// Keep removing elements from stack while pre[i] is greater
// then stack top. Make the last removed item as new root (to
// be compared next).
// At this point, pre[i] is greater than the removed root
// (That is why if we see a smaller element in step a), we
// return false)
// push pre[i] to stack (All elements in stack are in decreasing
// order)
