#include <iostream>
using namespace std;

int maxMoneyLooted(int hval[], int n){
    if (n == 0) 
        return 0; 
    if (n == 1) 
        return hval[0]; 
    if (n == 2) 
        return max(hval[0], hval[1]); 
  
    // dp[i] represent the maximum value stolen 
    // so far after reaching house i. 
    long dp[n]; 
  
    // Initialize the dp[0] and dp[1] 
    dp[0] = hval[0]; 
    dp[1] = max(hval[0], hval[1]); 
  
    // Fill remaining positions 
    for (int i = 2; i<n; i++) 
        dp[i] = max(hval[i]+dp[i-2], dp[i-1]); 
  
    return dp[n-1];  

}
int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << maxMoneyLooted(arr, n);

	delete[] arr;
}
