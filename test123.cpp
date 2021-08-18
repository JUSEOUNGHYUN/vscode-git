#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int a,b,c;

    for(int i=0; i<test; i++){
        cin>>a>>b;
        c=1;
        for(int j=0; j<b; j++){
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