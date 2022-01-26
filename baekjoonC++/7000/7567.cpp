#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cin>>str;

    int sum=0;

    for(int i=0; i<str.length(); i++){
        if(str[i]=='('){
            if(str[i-1]==')'){
                sum+=10;
            }
            else{
                sum+=5;
            }
        }
        if(str[i]==')'){
            if(str[i-1]=='('){
                sum+=10;
            }
            else{
                sum+=5;
            }
        }
    }
    cout<<sum+5;
}