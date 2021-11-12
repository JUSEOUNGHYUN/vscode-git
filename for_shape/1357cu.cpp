#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0; i<test; i++){
        for(int j=0; j<test-1-i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

}

// test=4
// *
// **
// ***
// ****
// ***
// **
// *