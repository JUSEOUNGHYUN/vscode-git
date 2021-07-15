#include <iostream>

using namespace std;

int main() {

    int n,a;
    cin>>n;



    a=((n/10)+(n%10*10))*2;

    if(a>100){
        a-=a/100*100;
    }

    if(a<=50){
        cout<<a<<"\n"<<"GOOD";
    }

    else cout<<a<<"\n"<<"OH MY GOD";
}