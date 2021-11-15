#include <iostream>
#include <string>

using namespace std;

int main() {

    int test;
    cin>>test;

    string str;
    int cnt=0;

    for(int i=0; i<test; i++){
        cin>>str;
        int len = str.length();
        bool flag = true;

        for(int j=0; j<len; j++){
            for(int k=0; k<j; k++){
                if(str[j]!=str[j-1] && str[j]==str[k]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
    
}