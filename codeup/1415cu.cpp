#include <iostream>

using namespace std;

int main() {

    int number, oddmax=0, evenmax=0;

    for(int i=0; i<10; i++){
        cin>>number;

        if(number%2==0){
            if(number>evenmax){
                evenmax=number;
            }
        }

        else if(number%2==1){
            if(number>oddmax){
                oddmax=number;
            }
        }
    }
    // 10개의 수가 다 홀수거나 짝수면 그것만 출력
    if(oddmax!=0){
        cout<<oddmax<<" ";
    }
    if(evenmax!=0){
        cout<<evenmax<<" ";
    }

    return 0;

}