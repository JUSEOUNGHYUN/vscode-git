#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int m=1;
    int cnt=1;

    for(int i=0; i<test; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<(test*2)-(m*2); j++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        m++;
        cout<<"\n";
    }

    for(int i=1; i<test; i++){
        for(int j=0; j<test-i; j++){
            cout<<"*";
        }
        for(int j=0; j<i+cnt; j++){
            cout<<" ";
        }
        for(int j=0; j<test-i; j++){
            cout<<"*";
        }
        cnt++;
        cout<<"\n";
    }

    return 0;
}