class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp =0;
        int bastbuy=prices[0];
        for(int i:prices){
            if(bastbuy<i){
                maxp=max(maxp,i-bastbuy);
            }
            bastbuy=min(bastbuy,i);

        }
        return maxp;
    }
};