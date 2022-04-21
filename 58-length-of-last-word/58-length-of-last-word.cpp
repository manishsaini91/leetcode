class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0;
        int pre=0;
        for(int i=0;i<s.size();i++){
            count++;
            if(s[i]!=' '){
            pre=count;
            }
            if(s[i]==' '){
                // pre =count;
                count=0;
            }
            
        }
        if(s[s.size()-1]==' ') return pre;
        else return count;
    }
};