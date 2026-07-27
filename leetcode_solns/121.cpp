class Solution {
public:
    int maxProfit(vector<int>& prices) {
        for(int i=0;i<prices.size()-1;i++){
            prices[i]=prices[i+1]-prices[i];
        }
        int maxi=INT_MIN;
        int sum=0;
        prices.erase(prices.begin()+prices.size());
        for(int i=0;i<prices.size();i++){
            sum+=prices[i];
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        if(maxi<0) return 0;
        return maxi;
    }
};

//best time to buy and sell stocks using kadane algorithm