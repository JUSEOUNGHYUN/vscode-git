#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int m=1;

    for(int i=0; i<test; i++){
        for(int j=0; j<test-1-i; j++){
            cout<<" ";
        }
        for(int j=0; j<i*2+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=0; i<test-1; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        for(int j=i; j<(test-1)*2-m; j++){
            cout<<"*";
        }
        m++;
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

//  *******
//   *****
//    ***
//     *
