#include <iostream>
#include <string>
#include <stdint.h>

using namespace std;

int main() {

    long long n;
    cin>>n;

    long long i, mul=0;

    for(i=1; i<n; i++){
        mul+=(n+1)*i; // keypoint
        /*if(i/n==i%n){
            mul+=i;
        }*/         // 이 코드는 에러남 왜 이러는지 모르겠음
    }
    cout<<mul;
    return 0;
}