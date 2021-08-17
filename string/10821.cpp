#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cin>>str;

    int len=(int)str.length();

    int cnt=0;

    for(int i=0; i<str.length(); i++){
        char c = str[i];

        if(c==','){
            cnt++;
        }
    }

    cout<<cnt+1;
}