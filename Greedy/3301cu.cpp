#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int cnt=0;

    cnt+=n/50000;
    n=n%50000;

    cnt+=n/10000;
    n=n%10000;

    cnt+=n/5000;
    n=n%5000;

    cnt+=n/1000;
    n=n%1000;

    cnt+=n/500;
    n=n%500;

    cnt+=n/100;
    n=n%100;

    cnt+=n/50;
    n=n%50;

    cnt+=n/10;
    n%=10;

    cout<<cnt<<"\n";
}