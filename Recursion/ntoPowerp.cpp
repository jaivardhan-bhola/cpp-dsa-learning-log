#include <iostream>

using namespace std;

int ntoPowerp(int n,int p){
    if (p==0){
        return 1;
    }
    int Ppower = ntoPowerp(n,p-1);
    return n*Ppower;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<ntoPowerp(n,p)<<endl;
    return 0;
}