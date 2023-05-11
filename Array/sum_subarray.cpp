#include <iostream>

using namespace std;

void sum_subarray(int nums[], int n){
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            cout<<sum<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    sum_subarray(a,n);
    return 0;
}