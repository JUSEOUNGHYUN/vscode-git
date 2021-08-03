#include <iostream>

using namespace std;

int main() {

    int a,b;
    int min1=2000, min2=2000;

    for(int i=0; i<3; i++){
        cin>>a;
        if(min1>a)
        min1=a;
    }

    for(int j=0; j<2; j++){
        cin>>b;
        if(min2>b)
        min2=b;
    }

    cout<<min1+min2-50;
}