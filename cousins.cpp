Given a Binary Tree A consisting of N nodes.

You need to find all the cousins of node B.
  

int find_sib(TreeNode *root,int data){
    if(root==NULL)return NULL;
    
    if(root->left && root->left->val==data){
        if(root->right){
            return root->right->val;
        }
    }
    if(root->right && root->right->val==data){
        if(root->left){
            return root->left->val;
        }
    }
    int x= find_sib(root->left,data);
    int y =find_sib(root->right,data);
    if(x){
        return x;
    }
    else if(y){
        return y;
    }
    else return -1;

}
vector<int> Solution::solve(TreeNode* root, int data) {
   
   
    vector<int>v;
    if(root==NULL || root->val==data){
        // v.push_back(NULL);
        return {};
    }
     int sib=-1;
    
    int flag=1,f2=1;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        if(flag==0)break;
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode* front = q.front();
            //  cout<<q.front()->val<<" ";
     
            q.pop();
            if(front->left){
                if(front->left->val==data)
                {
                    flag=0;
                    continue;
                }
                else
                q.push(front->left);
            }
            if(root->right){
                if(front->right->val==data)
                {
                    flag=0;
                    if(root->left && f2==1){
                        sib = root->left->val;
                        f2 =0;
                    }
                    continue;
                }
                else
                q.push(front->right);
            }
        }
    }
    cout<<sib<<"  ";
  while(!q.empty()){
    //   cout<<q.front()->val<<" ";
      if(((q.front()->val)==sib )&& (sib!=-1)){
          q.pop();
          continue;
      }
       v.push_back(q.front()->val);
       q.pop();
   }
   
    return v;
    
}
// 95 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
// 32
// 3
