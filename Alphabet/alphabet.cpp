#include <iostream>
#include <string>

using namespace std;

/*int main() {

    char str[90];
    cin>>str;

    for(int i=97; i<=122; i++){
        int num=0;
        for(int j=0; str[j]!='\0'; j++){
            if(str[j]==i){
                num++;
            }
        }
        cout<<num<<" ";
    }
}*/

int main() {

    string str;
    cin>>str;

    for(int i=97; i<=122; i++){
        int num=0;
        for(int j=0; j<str.length(); j++){
            char c=str[j];
            if(c==i){
                num++;
            }
        }
        cout<<num<<" ";
    }
}
