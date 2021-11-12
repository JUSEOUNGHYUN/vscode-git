#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        for(int j=1; j<test-i; j++){
            cout<<" ";
        }
        for(int j=0; j<i*2+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

// n=5
//     *
//    ***
//   *****
//  *******
// *********