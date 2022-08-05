class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int idx=-1;
        int n=a.size();
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(a.begin(),a.end());
        }
        else{
            int idx2=idx;
            for(int i=n-1;i>=idx;i--){
                if(a[i]>a[idx-1]){
                    idx2=i;
                    break;
                }
            }
            
            swap(a[idx-1],a[idx2]);
            reverse(a.begin()+idx,a.end());
        }
    }
};