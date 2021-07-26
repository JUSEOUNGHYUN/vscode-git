#include <iostream>

using namespace std;

int main() {

    int a,b,add;
    cin>>a>>b>>add;

    b+=add;
    a+=b/60;
    b%=60;
    a%=24;

    cout<<a<<" "<<b;
}