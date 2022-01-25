#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cin>>str;

    for(int i=0; i<str.length(); i++){
        if(str[0]=='5'&&str[1]=='5'&&str[2]=='5'){
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    return 0;
}