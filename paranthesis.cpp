Problem Description

Given a string A consisting only of '(' and ')'.

You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0.
  
Solution:
int Solution::solve(string str) {
    stack<char>stk;
    stk.push('x');
    int i=0;
    if(str[0]==')'){
        return 0;
    }
    if(str[str.size()-1]=='('){
        return 0;
    }
    while(i<str.size()){
        if(str[i]=='('){
            stk.push(str[i]);
        }
        if(str[i]==')'){
            while(stk.top()!='('){
                if(stk.top()=='x'){
                   return 0;
                }
                stk.pop();
                
            }
            stk.pop();
        }
        i++;
    }
    if(stk.top()=='x'){
        return 1;
    }
    
    return 0;
}
