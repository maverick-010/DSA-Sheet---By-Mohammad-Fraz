// Use Kadane's Algorithm

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
   long long sum=0;
    long long ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        ans = max(sum,ans);
        if(sum<0)
            sum=0;
    }
    return ans;
}
