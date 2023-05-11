#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void record_breaking_day(int nums[], int n){
    int ans = 0;
    int mx = -1;
    for(int i=0;i<n;i++){
        if(nums[i]>mx && nums[i]>nums[i+1]){
            ans++;
        }
        mx=max(nums[i],mx);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    record_breaking_day(a,n);
    return 0;
}