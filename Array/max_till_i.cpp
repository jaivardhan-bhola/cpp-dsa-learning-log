#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void max_till_i(int nums[], int n){
    int maxnum = nums[0];
    for(int i=0; i<n; i++){
        maxnum = max(maxnum, nums[i]);
        cout<<maxnum<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    max_till_i(a,n);
    return 0;
}