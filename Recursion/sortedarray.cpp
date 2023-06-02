#include <iostream>

using namespace std;

bool sortedarray(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray = sortedarray(arr+1,n-1);
    return(restarray && arr[0]<arr[1]);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sortedarray(arr,n)<<endl;
}