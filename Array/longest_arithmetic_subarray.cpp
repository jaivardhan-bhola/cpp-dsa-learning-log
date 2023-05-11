#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void longest_arithmetic_subarray(int nums[], int n){
    int ans = 2;
    int pd = nums[1]-nums[0];
    int curr=2;
    for(int j=2;j<n;j++){
        if (pd==nums[j]-nums[j-1])
        {
            curr ++;
        }
        else{
            pd=nums[j]-nums[j-1];
            curr=2;
        }
        ans=max(curr,ans);
    }
    cout<<ans<<endl;
    }

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    longest_arithmetic_subarray(a,n);
    return 0;
}