#include <iostream>

using namespace std;

int main() {

    int a,b,t;
    cin>>a>>b;
    int tmp=0;

    for(int i=a; i<=89; i+=5){
        tmp++;
        t=b+tmp;
    }

    cout<<t;


}