class Solution {
     public:
       int largestRectangleArea(vector<int>& heights) {
           int ans = 0;
               stack<int> stack;

                   for (int i = 0; i <= heights.size(); ++i) {
                         while (!stack.empty() &&
                                      (i == heights.size() || heights[stack.top()] > heights[i])) {
                                              const int h = heights[stack.top()];
                                                      stack.p…                      }
                                                                                  stack.push(i);
                                                                                      }

                                                                                          return ans;
                                                                                            }
                                                                                            };
