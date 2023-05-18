#include <iostream>
#include <string>

using namespace std;

void max_occuring_charcter(string str){
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }
    int maxfreq = 0;
    char ans = 'a';
    for(int i=0;i<26;i++){
        if(freq[i]>maxfreq){
            maxfreq=freq[i];
            ans=i+'a';
        }
    }
    cout<< maxfreq<<" "<<ans<<endl;
}

int main(){
    string mainstring;
    getline(cin,mainstring);
    max_occuring_charcter(mainstring);
    return 0;
}