#include <iostream>
using namespace std;

int fac(int n){

    int re=1;

    for(int i=1; i<=n; i++){
        re*=i;
    }

    return re;
}

int main() {

    int n;
    cin>>n;

    cout << fac(n);

    return 0;
}