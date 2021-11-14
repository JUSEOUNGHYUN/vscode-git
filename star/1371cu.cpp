#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int cnt=1;

    for(int i=0; i<test; i++){
        for(int j=0; j<test-1-i; j++){
            cout<<" ";
        }
        cout<<"*";

        for(int j=0; j<i*2; j++){
            cout<<" ";
        }
        cout<<"*";
    cout<<"\n";
    }

    for(int i=0; i<test; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        for(int j=i; j<(test*2)-1-(cnt*1); j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        cnt++;
        cout<<"\n";   
    }
    return 0;
}

// n=5
//     **
//    *  *
//   *    *
//  *      *
// *        *
// *        *
//  *      *
//   *    *
//    *  *
//     **
