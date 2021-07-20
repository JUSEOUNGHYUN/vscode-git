#include <iostream>

using namespace std;

void ch(int *p1, int *p2){
    int t=*p1;
    *p1=*p2;
    *p2=t;
}

int main(void){

    int a,b;

    cin>>a>>b;

    ch(&a,&b);
    cout<<a<<"\n"<<b;
}