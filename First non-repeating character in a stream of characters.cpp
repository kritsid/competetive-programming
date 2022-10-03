//First non-repeating character in a stream of characters


Given a string A denoting a stream of lowercase alphabets. You have to make new string B. B is formed such that we have to find first non-repeating character each time a character is inserted to the stream and append it at the end to B. If no non-repeating character is found then append '#' at the end of B.
  
  My Code:


string Solution::solve(string s) {
    queue<char>q;int i=0;
    unordered_map<char,int>m;
    string b="";int flag=1;
    while(i<s.size()){
        
        if(m.find(s[i])==m.end()){
            q.push(s[i]);
            m.insert({s[i],1});
        }
        else{
            m[s[i]]++;
        }
        while(1){
            if(!q.empty()){
                if(m[q.front()]>1){
                        q.pop();
                }
                else{
                    break;
                }
            }
            else{
                flag =0;
                break;
                
            }
        }
        if(flag!=0)
        b += q.front();
        else{
            b+='#';
        }
        flag=1;
        i++;
    }
    return b;
}


  
