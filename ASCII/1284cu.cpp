#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {

    char c[20];
    cin>>c;

    for(int i=0; c[i]!='\0'; i++){
        cout<<char(c[i]+2);
    }
        cout<<"\n";

    for(int i=0; c[i]!='\0'; i++){
        cout<<char((c[i]*7)%80+48);
    }

    return 0;
}
    

