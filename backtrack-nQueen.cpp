The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other.
  
  
bool corrPos(vector<string>&board,int row,int col,int A)
    {
    for(int r=0;r<row;r++)//in this line we chcek the rows below the current row. If Q present then false i.e we can not take this row
    if(board[r][col]=='Q')
    return false;
    for(int r=row,c=col;r>=0 and c>=0;r--,c--)//in this line we chcek by going in left below
    if(board[r][c]=='Q')
    return false;
    for(int r=row,c=col;r>=0 and c<A;r--,c++)//in this line we chcek by going in right below
    if(board[r][c]=='Q')
    return false;
    return true;//if there is no false then we can place Q in our current row and coloumn
    }
    void queen(vector<vector <string> >&ans,vector<string> &board,int row,int A)
    {
    if(row==A)
    {
    ans.push_back(board);
    return;
    }
    for(int col=0;col<A;col++)//we will go each coloum of each row. like 0th row: 0,1,2,3 <-coloumns
    {
    if(corrPos(board,row,col,A))
    {
    board[row][col]='Q';//each time we have 2 choice whether we take Q or not. Here we take Q as consideration
    queen(ans,board,row+1,A);
    board[row][col]='.';
    }
    }
    return;
    }
vector<vector <string> >Solution::solveNQueens(int A) {
    vector<vector<string> >ans;
    string rows;
    vector<string> board;
    for(int i=0;i<A;i++)
    rows.push_back('.');
    for(int i=0;i<A;i++)
    board.push_back(rows);
    queen(ans,board,0,A);
    return ans;
}
