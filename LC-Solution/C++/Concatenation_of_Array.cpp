/*#My Leet Code id = im-yash21
#Runtime:6 ms , Memory Usage: 15.2 MB */
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(2 * n);
        for (int i = 0; i < n; ++i) {
            result[i] = nums[i];
            result[i + n] = nums[i];
        }
        return result;
    }
};