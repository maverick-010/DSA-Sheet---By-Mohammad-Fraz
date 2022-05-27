int findDuplicate(vector<int> &arr) 
{
   int x=0,y=0;
    int n=arr.size();
    int ans=0;
    for(int i=0;i<n;i++){
        x+=arr[i];
    }
    y=n*(n-1)/2;
    ans = x-y;
    return ans;
}
