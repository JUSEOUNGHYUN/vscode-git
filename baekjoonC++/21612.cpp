#include <iostream>

using namespace std;

int main() {

    int b,p;
    cin>>b;

    p=5*b-400;

    if(p<100){
        cout<<p<<"\n";
        cout<<"1";
    }

    else if(p>100){
        cout<<p<<"\n";
        cout<<"-1";
    }

    else if(p==100){
        cout<<p<<"\n";
        cout<<"0";
    }

    return 0;
}