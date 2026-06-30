class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int currentArea = 0;
        int left =0;
        int right =heights.size()-1;

        while (left < right) {
            int maxHeight = min(heights[left], heights[right]);
            currentArea = maxHeight * (right - left);
            area = max(area,currentArea);

            if (heights[left] <= heights[right]) {
                left++;
            }
            else {
                right--;
            }

        }

        return area;

    }

};
