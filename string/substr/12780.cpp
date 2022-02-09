#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    string str, str1;
    cin>>str>>str1;

    int c=0;

    for(int i=0; i<str.length(); i++){
        if(str.substr(i, str1.length())==str1){
            c++;
        }
    }
    cout<<c;
}