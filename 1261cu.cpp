#include <iostream>


using namespace std;

int main() {

    int a,b[10];
    int tmp=0;

    for(int i=0; i<10; i++){
        cin>>a;
        b[i]=a;
    }

    for(int i=0; i<10; i++){
        if(b[i]%5==0){
            cout<<b[i];
            tmp=1;
            break;
        }
    }

    if(tmp==0){
        cout<<"0";
    }

}