Determine whether an integer is a palindrome. Do this without extra space.
  
int Solution::isPalindrome(int A) {
    if(A<0){
        return false;
    }
    int n=10;
    int num = A;
    int len=0;
    while(num>0){
        num = num/10;
        len++;
    }
    string s= to_string(A);
    
    // cout<<n<<" ";
    int i=0,j=len-1;
    while(i!=j && i<j){
        if(s[i]==s[j]){
            i++;j--;
        }
        else{
            return false;
            // break;
        }
    }
    return true;
}
