#include<bits/stdc++.h>
long getMaximumProfit(long *values, int n)
{
 long maxPro=0;
    for(int i=1;i<n;i++){
        if(values[i]>values[i-1]){
        maxPro +=(values[i]-values[i-1]);
        }
    }
    return maxPro;
}
