#include <iostream>

using namespace std;

int main() {

    int a,b;
    cin>>a>>b;

    // 1900년대 1남자 2여자
    // 2000년대 3남자 4여자

    if(a/1000>12&&b==1||b==2){
        cout<<2012-a/10000-1899;
    }

    else if(a/10000<=12&&b==3||b==4){
        cout<<2012-a/10000-1999;
    }
    
    
}