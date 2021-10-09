// present + plus = finish
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int pre_temp, fin_temp;
    cin>>pre_temp>>fin_temp;

    int plus_temp = abs(fin_temp-pre_temp);

    int a = plus_temp/10;
    int b = plus_temp%10;

    if(b==1||b==5){
        a+=1;
    }

    else if(b==2||b==4||b==6||b==9){
        a+=2;
    }

    else if(b==3||b==7||b==8){
        a+=3;
    }

    cout<<a;

    return 0;



}