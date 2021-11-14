#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int cnt=1;

    for(int i=0; i<test; i++){
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        for(int j=i; j<test*2-1-cnt; j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        for(int j=0; j<i-1+cnt; j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        for(int j=i; j<test*2-1-cnt; j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        cnt++;
        cout<<"\n";
    }

    for(int i=0; i<1; i++){
        for(int j=0; j<test*4+2; j++){
            cout<<"*";
        }
    }
    return 0;
}
// test=5
// **        **
// * *      * *
// *  *    *  *
// *   *  *   *
// *    **    *
// ************
 
// 5=22
// 6=26
// 7=30
// 8=34