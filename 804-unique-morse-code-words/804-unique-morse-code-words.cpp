class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int  n=words.size();
        if(n==1){
            return 1;
        }
        unordered_set<string> set;
        vector<string> sym={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(auto i:words){
            string code="";
            for(auto ch:i){
                code+=sym[ch-'a'];
            }
            set.insert(code);
        }
        return set.size();
    }
};