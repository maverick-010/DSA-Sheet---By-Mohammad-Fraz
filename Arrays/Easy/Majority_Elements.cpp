// Moore's Voting Algorithm

#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	int count=0;
    int candi=0;
    for(int i=0;i<n;i++){
        if(count==0)candi=arr[i];
        if(arr[i]==candi)count+=1;
        else count-=1;
    }
    count =0;
    for(int i=0;i<n;i++){
        if(candi==arr[i])count++;
    }
    if(count>floor(n/2)){
        return candi;
    }
    return -1;
}
