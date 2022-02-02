#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    string str;
    getline(cin, str);

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    for(int i=0; i<str.length(); i++){
        if(str[i]=='A'&&str[i+1=='N'&&str[i+2]=='D']){
            int sever = str.find("AND");
            string st = str.substr(0, sever);
            string s = str.substr(sever+3);

            if(st==s&&st=="true"){
                cout<<"true";
            }
            else if(st==s&&st=="false"){
                cout<<"false";
            }
            else if(st!=s){
                cout<<"false";
            }
        }
        else if(str[i]=='O'&&str[i+1]=='R'){
            int sev = str.find("OR");
            string st1 = str.substr(0, sev);
            string s1 = str.substr(sev+2);

            if(st1==s1&&st1=="true"){
                cout<<"true";
            }
            else if(st1==s1&&st1=="false"){
                cout<<"false";
            }
            else if(st1!=s1){
                cout<<"true";
            }
        }
    }
    return 0;
}