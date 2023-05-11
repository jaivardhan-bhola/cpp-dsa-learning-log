#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void max_till_i(int nums[], int n){
    int max = nums[0];
    for(int i=1;i<=n;i++){
        if (nums[i]>max){
            max=nums[i];
        }
    }
    cout<<max<<endl;
}

void sum_subarray(int nums[], int n){
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            cout<<sum<<endl;
        }
    }
}

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

void first_repeating_element(int a[], int n){
    const int N = 1e6+2;
    int idx[N];
    for (int i=0;i<N;i++){
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] == i;
        }
    }
    if (minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }
}
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
    cout<<max(nonwrapsum,wrapsum)<<endl;;    
}

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