class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
       vector<vector<int>> v;
        int size=intervals.size();
        if(size==1 or size==0){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0],end=intervals[0][1];
        v.push_back({start,end});
        
        for(int i=1;i<size;i++){
            int si=v.size();
            if(v[si-1][1]>=intervals[i][0]){
                v[si-1][1]=max(intervals[i][1],v[si-1][1]);
                
            }
            else{
                v.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        return v;
    }
};