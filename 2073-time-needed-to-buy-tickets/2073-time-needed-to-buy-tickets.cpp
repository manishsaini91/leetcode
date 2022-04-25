class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ti=tickets[k];
        int count=0;
        int time=0;
        while(count<ti){
            for(int i=0;i<tickets.size();i++){
                if(tickets[i]!=0){
                    tickets[i]=tickets[i]-1;
                    time++;
                   
                    
                }
                 if(count==ti-1 and i==k){
                        break;
                    }
            }
            count++;
        }
        return time;
    }
};