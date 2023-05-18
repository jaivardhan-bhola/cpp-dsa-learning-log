#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void greatest_num(string str){
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;
}

int main(){
    string inputnum;
    cin>>inputnum;
    greatest_num(inputnum);
    return 0;
}