class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int low = 0;
        int high = n - 1;

        int ans = 0;

        while (low < high) {

            int width = high - low;
            int height = min(heights[low], heights[high]);

            ans = max(ans, width * height);

            if (heights[low] < heights[high]) {
                low++;
            }
            else if (heights[low] > heights[high]) {
                high--;
            }
            else {
                low++;
            }
        }

        return ans;
    }
};