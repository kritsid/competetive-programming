class Solution {
    
      static int max(int a, int b) {
    if (a >= b) return a;
    return b;
  }

  static int min(int a, int b) {
    if (a <= b) return a;
    return b;
  }
    public int maxArea(int[] height) {
   int len = height.length;
    int i = 0, j = len - 1, area = 0, mx = 0;
    while (i != j) {
      area = min(height[i], height[j]) * (j - i);
      mx = max(area, mx);
      if (height[i] >= height[j]) {
        j--;
      } else {
        i++;
      }
    }
    return mx;
        
    }
}
