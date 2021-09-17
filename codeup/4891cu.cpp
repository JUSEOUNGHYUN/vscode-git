#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int a;

    int min=1000, max=-1000;

    for(int i=0; i<test; i++){
        cin>>a;

        if(a>max){
            max=a;
        }

        if(min>a){
            min=a;
        }
    }
    cout<<max-min;

    return 0;
}