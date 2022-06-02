#include<bits/stdc++.h>
void solve(int i,vector<int>arr,vector<int>&sub,vector<vector<int>>&ans){
    if(i==arr.size()){
        ans.push_back(sub);
        return;
    }
    sub.push_back(arr[i]);
    solve(i+1,arr,sub,ans);
    
    sub.pop_back();
    while(i+1<arr.size() && arr[i]==arr[i+1]){
        i++;
    }
    solve(i+1,arr,sub,ans);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
   sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    vector<int>sub;
    solve(0,arr,sub,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
