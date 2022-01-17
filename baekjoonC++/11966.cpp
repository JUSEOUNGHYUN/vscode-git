#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;
/*
    bool t = false;

    int sum=1;

    for(int i=0; i<30; i++){
        sum*=2;

        if(n==1||n==sum){
            t = true;
            break;
        }
    }

    if(t){
        cout<<"1";
    }
    else{
        cout<<"0";
    }

    return 0;
    */

    int sum=1;

    for(int i=0; i<30; i++){
        sum*=2;

        if(n==1||n==sum){
            cout<<"1";
            return 0;
        }
    }

    cout<<"0";
    return 0;
}