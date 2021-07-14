#include <iostream>

using namespace std;

int main() {

    int n,m;
    cin>>n;

    r:
    cin>>m;

    if(n--!=0){
        cout<<m<<"\n";
        goto r;
    }

    return 0;

}