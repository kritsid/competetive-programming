/*
    Given two strings s and t. Return the minimum number of operations required to convert s to t.
    The possible operations are permitted:

        1. Insert a character at any position of the string.
        2. Remove any character from the string.
        3. Replace any character from the string with any other character.

*/

#include<bits/stdc++.h>

using namespace std;

int editDistance(string s, string t) {
    int n = s.size();
    int m = t.size();

    // Store minimum number of operations to equate strings at that time
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=m;j++) {
            // If one string is empty then minimum operations is delete other string
            if(i==0) dp[i][j] = j;
            else if(j==0) dp[i][j] = i;
            else {
                // We take minimum of delete from string, add to string, or replace in string
                // If characters are equal then we only check for addition or deletion
                if(s[i-1]==t[j-1]) dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])+1);
                else dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
            }
        }
    }
    return dp[n][m];
}

int main() {
    string s,t;
    cin>>s>>t;
    cout<<editDistance(s,t);
    return 0;
}
