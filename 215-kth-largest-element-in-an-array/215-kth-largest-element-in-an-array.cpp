class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         int len=nums.size();
        priority_queue<int> p;
        for(int i=0;i<len;i++){
            p.push(nums[i]);
        }
        int ans,i=1;
        while(!p.empty()){
            if(i==k){
                ans=p.top();
                break;
            }
            i++;
            p.pop();}
    return ans;
    }
};