#include <iostream>

using namespace std;

void mul2(int *n){  // int *p=&a;
    *n=*n * *n;
}

int main(void) {
    int a;
    cin>>a;

    mul2(&a);       // int *p=&a
    cout<<a;
}