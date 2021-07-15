#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    for(int i=1; i<c; i++){
        a+=b;
    }

    cout<<a;
}