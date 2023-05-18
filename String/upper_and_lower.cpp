#include <iostream>
#include <string>

using namespace std;

void to_upper(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
}
void to_lower(string str){
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl;
}

int main(){
    string mainstring;
    getline(cin,mainstring);
    to_upper(mainstring);
    to_lower(mainstring);
    return 0;
    }