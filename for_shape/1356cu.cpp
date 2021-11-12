#include <iostream>

using namespace std;
/*
int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        if(i==0||i==test-1){
            for(int j=0; j<test; j++){
                cout<<"*";
            }
        }
        else{
            for(int j=0; j<test; j++){
                if(j==0||j==test-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }

}
*/

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        for(int j=0; j<test; j++){
            if(i==0||i==test-1||j==0||j==test-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

// *****
// *   *
// *   *
// *   *
// *****