#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    getline(cin, str);

    int len = str.length();

    for(int i=0; i<len; i++){
        cout<<str[i];
        if((i+1)%10==0){
            cout<<"\n";
        }

    }
    return 0;
}