class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int buy = prices[0];
        int profit = 0;
        int minus = 0;
        
        for(int i=1;i<n;i++){
            if(buy<prices[i]){
                minus = prices[i] - buy;
                profit = Math.max(minus, profit);
            }
            else
                buy = prices[i];
        }
        return profit;
    }
}

