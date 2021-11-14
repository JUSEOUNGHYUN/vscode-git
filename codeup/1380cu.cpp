#include <iostream>

using namespace std;
/*
int main() {

    int test;
    cin>>test;

    for(int i=1; i<test; i++){
        if(test-i<7&&i<7){
        cout<<i<<" "<<test-i;
        cout<<"\n";
        }
    }
    return 0;
}
*/

int main() {

    int test;
    cin>>test;

    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if(i+j==test){
                cout<<i<<" "<<j;
                cout<<"\n";
            }
        }
    }
    return 0;
}
