class Solution {
public:
    double average(vector<int>& salary) {
        // int minele=*min_element(salary.begin(),salary.end());
        // int maxele=*max_element(salary.begin(),salary.end());
        int x=salary.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<x;i++){
            maxi=max(maxi,salary[i]);
        }
        
        for(int i=0;i<x;i++){
            mini=min(mini,salary[i]);
        }
        // cout<<minele<<" "<<maxele;
        double sum=0.000;
        int  count=0;
        for(int i=0;i<salary.size();i++){
           sum=sum+salary[i];
        }
        
        sum=sum-mini-maxi;
    
        
        return sum/(salary.size()-2);
    }
};