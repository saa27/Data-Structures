class Solution {
public:
    int maxProfit(vector<int>& a) {
         int profit =0;
        int minimal = INT_MAX;
       
        
        for(int i=0;i<a.size();i++){
            minimal = min(minimal,a[i]);
            profit = max(profit,(a[i]-minimal));
        }
        
        return profit;
    }
};