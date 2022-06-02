#include<bits/stdc++.h>
void solve(int i,vector<int>arr,vector<vector<int>>&ans){
    if(i>=arr.size()){
        ans.push_back(arr);
    }
   
    for(int j=i;j<arr.size();j++){
      
        swap(arr[i],arr[j]);
        solve(i+1,arr,ans);
        swap(arr[i],arr[j]);
    }
}
vector<vector<int>> permutations(vector<int> &vec, int size) {
    vector<vector<int>>ans;
    int index=0;
    solve(index,vec,ans);
    return ans;
}
