class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro = 0;
        int MinPrice = INT_MAX;
        for(int i=0;i<n;i++){
            MinPrice = min(MinPrice , prices[i]);
            maxPro = max(maxPro , prices[i]-MinPrice);

        }
        return maxPro;
        
    }
};
