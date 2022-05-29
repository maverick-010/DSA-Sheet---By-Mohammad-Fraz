#include<bits/stdc++.h>
int firstMissing(int arr[], int n)
{
   int a=1;
   sort(arr,arr+n);
   for(int i=0;i<n;i++)
   {  
       if(arr[i]>0)
       {
           if(arr[i]==a)
               a++;
           else
               return a;
       }
   }
   return a;
}
