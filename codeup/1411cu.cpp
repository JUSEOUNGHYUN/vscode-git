#include <iostream>

using namespace std;

int main() {

    int a[50]={};

    int test, num;

    cin>>test;

    for(int i=0; i<test; i++) {
        a[i]=i+1;
    }

    for(int j=0; j<test-1; j++){
        cin>>num;
        a[num-1]=0;
    }

    for(int k=1; k<=test; k++){
        if(a[k]!=0){
            cout<<a[k];
        }
    }

    return 0;
}