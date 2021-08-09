#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    getline(cin, str);

    char find = 'a';

    int size=str.size();

    int cnt=0;

    for(int i=0; i<size; i++){
        if(str[i]==find){
            cnt++;
        }
    }

    cout<<cnt;
    return 0;
}