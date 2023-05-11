#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void subarray_with_given_sum(int a[], int s, int n){
    int i=0,j=0,sum=0;
    
    while(j<n && sum+a[j]<=s){
        sum+=a[j];
        j++;
    }
    if (sum==s){
        cout<<i+1<<" "<<j<<endl;
        return;
    }
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            cout<<i+1<<" "<<j+1<<endl;
            return;
        }
        j++;
    }
    cout<<"-1 -1"<<endl;
} 

int main(){
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subarray_with_given_sum(a,s,n);
}