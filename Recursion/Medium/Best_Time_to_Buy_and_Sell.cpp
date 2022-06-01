int maxProfit(int prices[], int n)
{
   int pro=0;
    for(int i=1;i<n;i++){
        if(prices[i]>prices[i-1]){
            pro+=(prices[i]-prices[i-1]);
        }
    }
    return pro;
}
