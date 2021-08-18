#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        int a,b,c;
        cin>>a>>b;
        c=1;
        for(int i=0; i<b; i++){
            c=c*a%10;
        }
        if(c==0){
            cout<<"10"<<"\n";
        }
        else {
            cout<<c<<"\n";
        }
    }
    return 0;
}