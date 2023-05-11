#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool pairsum(int a[], int n, int pairsum){
    int low=0, high=n-1;
    for(int i=0;i<n;i++){
        while(low<high){
            int sum=a[high]+a[low];
            if(sum==pairsum){
                cout<<low+1<<" "<<high+1<<endl;
                return true;
            }
            else if(sum>pairsum){
                high --;
            }
            else{
                low++;
            }
        }
    }
    return false;
}

int main(){
    int n, ps;
    cin>>n>>ps;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<pairsum(a,n,ps);
    return 0;
}