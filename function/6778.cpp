#include <iostream>

using namespace std;

void hidra(int a, int b){

    if(a>=3 && b<=4){
        cout<<"TroyMartian\n";
    }

    if(a<=6 && b>=2){
        cout<<"VladSaturnian\n";
    }

    if(a<=2 && b<=3){
        cout<<"GraemeMercurian\n";
    }
}

int main(void){
    int a,b;
    cin>>a>>b;

    hidra(a,b);

    return 0;
}