#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, target;
    cin >> n >> m >> target;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int row=0,column=m-1;
    while(row<n && column>=0){
        if(a[row][column]==target){
            cout<<"Element found at "<<row+1<<","<<column+1<<endl;
            return 0;
        }
        else if(a[row][column]>target){
            column--;
        }
        else{
            row++;
        }
    }

    return 0;
}