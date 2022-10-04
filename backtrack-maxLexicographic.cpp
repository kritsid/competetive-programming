Given a string A and integer B, what is maximal lexicographical string that can be made from A if you do atmost B swaps.
  
void helper(string s, int b, string &str){
    
    if(b<=0){
        return ;
    }
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[j]>s[i]){
                swap(s[j],s[i]);
                if(s>str)
                    str = s;
                helper(s,b-1,str);
                swap(s[j],s[i]);
                
            }
        }
    }
}
string Solution::solve(string s, int b) {
   string str = s;
   
    helper(s,b,str);
    
    return str;
}
