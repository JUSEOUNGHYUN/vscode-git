#include <iostream>

using namespace std;

int main() {


    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<test-i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
// *****
// o****
// oo***
// ooo**
// oooo*