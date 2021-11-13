#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int m=1;

    for(int i=0; i<test; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=i; j<test*2-m; j++){
            cout<<"*";
        }
        m++;
        cout<<"\n";
    }
    return 0;
}

// n=5
// *********
//  *******
//   *****
//    ***
//     *
