#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>hex>>n;
    hex(cout);
    cout.setf(ios::uppercase);

    for(int i=1; i<=15; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    }
    
}