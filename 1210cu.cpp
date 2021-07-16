#include <iostream>

using namespace std;

int main() {

    int a,b;
    int cal1, cal2;

    cin>>a>>b;

    if(a==1){
        cal1=400;
    }
    else if(a==2){
        cal1=340;
    }
    else if(a==3){
        cal1=170;
    }
    else if(a==4){
        cal1=100;
    }
    else if(a==5){
        cal1=70;    
    }

    if(b==1){
        cal2=400;
    }
    else if(b==2){
        cal2=340;
    }
    else if(b==3){
        cal2=170;
    }
    else if(b==4){
        cal2=100;
    }
    else if(b==5){
        cal2=70;
    }

    if(cal1+cal2>500){
        cout<<"angry";
    }
    else cout<<"no angry";
}