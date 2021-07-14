#include <iostream>
#include <string>

using namespace std;

int main() {

    int a;
    re:
    cin>>a;

    if(a!=0){
        cout<<a<<"\n";
        goto re;
    }
    return 0;
}