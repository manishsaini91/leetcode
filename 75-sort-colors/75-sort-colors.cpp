class Solution {
public:
    void sortColors(vector<int>& nums) {
       // int zero=0;
       //  int one=0;
       //  int two=0;
       //  int n=nums.size();
       //  for(int i=0;i<n;i++){
       //      if(nums[i]==0){
       //          zero++;
       //      }
       //      else if(nums[i]==1)
       //          one++;
       //      else
       //          two++;
       //  }
       //  for(int i=0;i<zero;i++){
       //      nums[i]=0;
       //  }
       //  for(int i=zero;i<one+zero;i++){
       //      nums[i]=1;
       //  }
       //  for(int i=zero+one;i<n;i++){
       //      nums[i]=2;
       //  }
       //  // return nums;
        
        //////two pointer approach
        
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};