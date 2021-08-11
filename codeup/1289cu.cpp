#include <iostream>

using namespace std;

int main() {

    int a,b;

    int mul=1;
    int max=-1000;

    for(int i=0; i<3; i++){
        cin>>a>>b;
        mul=a*b;

        if(mul>max)
        max=mul;

    }

    cout<<max;
}