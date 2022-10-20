//function to find the longest common prefix string amongst an array of strings.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0)
            return "";
        else if(strs.size()==1)
            return strs[0];
        else{
            sort(strs.begin(),strs.end());
            if(strs[0]=="")
                return "";
            string a = strs[0],b=strs[strs.size()-1];
            for( int i = 0; i<a.size();i++){
                if(a[i]==b[i])
                    ans.push_back(a[i]);
                if(a[i]!=b[i])
                    break;
            }
        }
        return ans;
    }
};