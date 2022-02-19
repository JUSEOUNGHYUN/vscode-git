#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        if(i==0||i==n-1||i==n/2){
            for(int j=0; j<n; j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

// E 
// n = 7

// *****
// *
// *
// *****
// *
// *
// *****