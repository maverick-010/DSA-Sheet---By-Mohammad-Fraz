#include<bits/stdc++.h>
vector < int > findDuplicates(vector < int > & arr, int n) {
 unordered_map<int,int>m;
  vector<int>v;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto x:m){
        if(x.second>1)
            v.push_back(x.first);
    }
    return v;
}
