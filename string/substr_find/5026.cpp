#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){

        string str;
        cin>>str;

        int a,b;

        if(str=="P=NP"){
            cout<<"skipped"<<"\n";
        }

        else{
            int pos=str.find('+');
            a=stoi(str.substr(0,pos));
            b=stoi(str.substr(pos+1));
            cout<<a+b<<"\n";
        }
        
    }
}