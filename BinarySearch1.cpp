Problem: Given a matrix of integers A of size N x M and an integer B.  Write an efficient algorithm that searches for integar B in matrix A.
  
  My SOln:
int binary(vector<vector<int> >arr, int x,int row,int s,int e){
    if(s<=e){
        int mid = (s+e)/2;
        if(arr[row][mid]==x){
            return 1;
        }
        else if(arr[row][mid]>x){
            return binary(arr,x,row,s,mid-1);
        }
        else{
            return binary(arr,x,row,mid+1,e);
        }
    }
    return 0;
}
int Solution::searchMatrix(vector<vector<int> > &arr, int b) {
    int row = arr.size();
    int col = arr[0].size();
    int poss_row;
    //find row containing range of b
    for(int i=0;i<row;i++){
        if(arr[i][col-1]>b){
            poss_row = i;
            break;
        }
        if(arr[i][col-1]==b){
            return 1;
        }
    }
    // apply binary search in poss_row
    return binary(arr,b,poss_row,0,col-1);
}
