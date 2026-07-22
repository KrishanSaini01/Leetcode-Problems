class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp =0;
        int bastbuy=prices[0];
        for(int i:prices){
            bastbuy=min(bastbuy,i);
            maxp=max(maxp,i-bastbuy);
        }
        return maxp;
    }
};