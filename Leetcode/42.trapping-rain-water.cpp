class Solution {
     public:
       int trap(vector<int>& height) {
           const int n = height.size();
               int ans = 0;
                   vector<int> l(n);  // l[i] := max(height[0..i])
                       vector<int> r(n);  // r[i] := max(height[i..n))

                           for (int i = 0; i < n; ++i)
                                 l[i] = i == 0 ? height[i] : max(height[i], l…                                                         return ans;
                                                           }
                                                           };
