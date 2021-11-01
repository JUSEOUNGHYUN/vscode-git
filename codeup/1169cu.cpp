#include <iostream>

using namespace std;

int main() {

    int year;
    cin>>year;

    int a,b;

    a = 2013-year;

    if(a>=2000){
        a=a-2000;
        b=3;
    }
    else{
        a=a-1900;
        b=1;
    }

    cout<<a<<" "<<b;

    return 0;
}