class Solution {
public:
    double average(vector<int>& salary) {
        int minele=*min_element(salary.begin(),salary.end());
        int maxele=*max_element(salary.begin(),salary.end());
        // cout<<minele<<" "<<maxele;
        double sum=0.000;
        int  count=0;
        for(int i=0;i<salary.size();i++){
           sum=sum+salary[i];
        }
        
        sum=sum-minele-maxele;
    
        
        return sum/(salary.size()-2);
    }
};