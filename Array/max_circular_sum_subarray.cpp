#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max_sum_subarray(int a[], int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}

void max_circular_sum_subarray(int a[], int n){
    int nonwrapsum=max_sum_subarray(a,n);
    int tsum=0;
    for(int i=0;i<n;i++){
        tsum+=a[i];
        a[i]=-a[i];
    }
    int wrapsum = tsum+max_sum_subarray(a,n);
    cout<<max(nonwrapsum,wrapsum)<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max_circular_sum_subarray(a,n);
}