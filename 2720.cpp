#include <iostream>

using namespace std;

int main() {

    int t,a;
    cin>>t;

    int q=0,d=0,n=0,p=0;
    int qu=0,di=0,ni=0,pe=0;
    for(int i=0; i<t; i++){

    cin>>a;

    qu=a%25;
    q=a/25;
    di=qu%10;
    d=qu/10;
    ni=di%5;
    n=di/5;
    pe=ni%1;
    p=ni;

    cout<<q<<" "<<d<<" "<<n<<" "<<p<<"\n";
    }
}