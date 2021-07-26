#include <iostream>

using namespace std;

int main() {

    int a,b,c,add;
    cin>>a>>b>>c>>add;

    c+=add;
    b+=c/60;
    a+=b/60;

    c%=60;
    b%=60;
    a%=24;

    cout<<a<<" "<<b<<" "<<c;
}