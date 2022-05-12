class Solution {
public:
    void rec(int cur, vector<int> &nums, vector<vector<int>> &res) {
        if (cur == (int)nums.size()) {
            res.push_back(nums);
            return;
        }
        for(int i = cur; i < (int)nums.size(); i++) {
            swap(nums[cur], nums[i]);
            rec(cur + 1, nums, res);
            swap(nums[cur], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        rec(0, nums, res);
        return res;
    }
};