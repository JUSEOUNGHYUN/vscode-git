#include <iostream>

using namespace std;

int main() {

    int a[3];

    int *p=a;

    for(int i=0; i<3; i++){
        cin>>a[i];
    }

    cout<<p[0]<<"\n";   //0번째 배열 숫자
    cout<<*(a)<<"\n";   //0번째 배열 숫자
    cout<<p[1]<<"\n";   //1번째 배열 숫자
    cout<<*(a+1);       //1번째 배열 숫자
}