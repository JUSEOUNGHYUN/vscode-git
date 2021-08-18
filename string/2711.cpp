#include <iostream>
#include <string>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        int s;
        string str;
        cin>>s>>str;

        for(int i=0; i<str.size(); i++){
            if(i!=s-1){
                cout<<str[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}


//1009