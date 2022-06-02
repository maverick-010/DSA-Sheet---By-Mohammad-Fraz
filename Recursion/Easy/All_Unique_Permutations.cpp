#include<bits/stdc++.h>
void solve(int i,int n,vector<int>&arr,vector<vector<int>>&ans){
    if(i>=arr.size()){
        ans.push_back(arr);
    }
    unordered_set<int>m;
    for(int j=i;j<arr.size();j++){
        if(m.find(arr[j])!=m.end())continue;
        m.insert(arr[j]);
        swap(arr[i],arr[j]);
        solve(i+1,n,arr,ans);
        swap(arr[i],arr[j]);
    }
}
vector<vector<int> > uniquePermutations(vector<int> &arr, int n) {
	vector<vector<int>>ans;
    solve(0,n,arr,ans);
    return ans;
}
