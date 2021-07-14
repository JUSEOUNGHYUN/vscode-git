#include <iostream>

using namespace std;

int main() {

    int a=1;

    while(a!=0){    //a가 0이 아닐때 참이여서 while문에 있는 코드 실행 가능

        cin>>a;
        if(a!=0){
            cout<<a<<"\n";  //0이 출력되면 안되므로 if문으로 0이 아닐경우에만 입력받은값을 출력
        }
    }
    return 0;
}