#include <iostream>

using namespace std;

int main() {

    int a[10000]={0,};
    int n;
    long long mul=1;
    int re=0;

    for(int i=0; i<3; i++){
        cin>>n;
        mul*=n;
    }

    for(int i=0; mul>0; i++){
        re=mul%10;
        a[re]+=1;
        mul/=10;
    }

    for(int i=0; i<10; i++){
        cout<<a[i]<<"\n";
    }
}