#include <bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
sort(arr.begin(),arr.end());

vector<pair<int,int>> ans;

   int sum = 0;

int left = 0, right = n-1;

while(left < right) {

 sum = arr[left]+arr[right];

 if(sum == target) {

  pair<int,int> p(arr[left],arr[right]);

  ans.push_back(p);

  left++; right--;

 }else if(sum < target) {

  left++;

 } else {

  right--;

 }

}

if(ans.size() == 0) {

 pair<int,int> p(-1,-1);

 ans.push_back(p);

 return ans;

}

return ans;
}
