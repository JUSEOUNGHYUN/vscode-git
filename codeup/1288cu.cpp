#include <iostream>

using namespace std;

int main() {

    int a,a1;
    int b,b1;

    cin>>a>>b;

    int mul=1, mul1=1, mul2=1;

    for(int i=1; i<=a; i++){
        mul*=i;
    }

    for(int j=1; j<=b; j++){
        mul1*=j;
    }

    for(int k=1; k<=a-b; k++){
        mul2*=k;
    }

    cout<<mul/(mul1*mul2);
} 