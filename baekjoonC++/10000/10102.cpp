#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    string str;
    cin>>str;

    int cnt=0, cnt1=0;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='A'){
            cnt++;
        }
        else{
            cnt1++;
        }
    }

    if(cnt>cnt1){
        cout<<"A";
    }
    else if(cnt<cnt1){
        cout<<"B";
    }
    else{
        cout<<"Tie";
    }
}