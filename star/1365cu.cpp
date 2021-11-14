#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        for(int j=0; j<test; j++){
            if(i==0||i==test-1||j==0||j==test-1||i+j==test-1||i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

// *********
// **     **
// * *   * *
// *  * *  *
// *   *   *
// *  * *  *
// * *   * *
// **     **
// *********