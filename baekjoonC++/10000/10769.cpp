#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    getline(cin, str);

    int len=str.length();

    int cnt=0;
    int cnt1=0;

    for(int i=0; i<len; i++){
        if(str[i]==':'&&str[i+1]=='-'&&str[i+2]==')'){
            cnt++;
        }
        else if(str[i]==':'&&str[i+1]=='-'&&str[i+2]=='('){
            cnt1++;
        }
    }

    if(cnt1>0&&cnt>0&&cnt==cnt1){
        cout<<"unsure";
    }
    else if(cnt>cnt1){
        cout<<"happy";
    }
    else if(cnt<cnt1){
        cout<<"sad";
    }
    else if(cnt==0&&cnt1==0){
        cout<<"none";
    }
    
    return 0;
}