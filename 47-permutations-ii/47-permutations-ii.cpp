class Solution {
public:
    void rec(int cur, vector<int> &nums, set<vector<int>> &res) {
        if (cur == (int)nums.size()) {
            res.insert(nums);
            return;
        }
        for(int i = cur; i < (int)nums.size(); i++) {
            swap(nums[cur], nums[i]);
            rec(cur + 1, nums, res);
            swap(nums[cur], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> res;
        rec(0, nums, res);
        vector<vector<int>> ans;
        for(auto v: res) {
            ans.push_back(v);
        }
        return ans;
    }
};