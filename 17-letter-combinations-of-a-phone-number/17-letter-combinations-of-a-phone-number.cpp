class Solution {
public:
    vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}, ans;
    
    void rec(int cur, string &digits, string res) {
        if (cur == digits.length()) {
            ans.push_back(res);
            return;
        }
        for(char c: mappings[digits[cur] - '0' - 2]) {
            rec(cur + 1, digits, res + c);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            return ans;
        }
        rec(0, digits, "");
        return ans;
    }

};