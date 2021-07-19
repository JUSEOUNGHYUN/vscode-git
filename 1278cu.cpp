#include <iostream>

using namespace std;

int main() {

    int a;
    cin>>a;

    int tmp=0;

    while(a!=0){
        a/=10;
        tmp++;
    }

    cout<<tmp;
}