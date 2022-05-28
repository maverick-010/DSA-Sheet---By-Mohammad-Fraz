#include<bits/stdc++.h>
vector<int> searchInSortedArray(vector<int> &arr, int n, vector<int> &queries, int q)
{
	unordered_map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto i=0;i<queries.size();i++){
        if(m.find(queries[i])!=m.end()){
            v.push_back(1);
        }else{
            v.push_back(0);
        }
    }
    return v;
}
