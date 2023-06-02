#include <iostream>

using namespace std;

void reverseString(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);
    reverseString(ros);
    cout<<s[0];
}

int main(){
    string s;
    getline(cin,s);
    reverseString(s);
}