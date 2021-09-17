#include <iostream>

using namespace std;

int main() {

    int a,b;
    cin>>a>>b;

    int i,j;

    int sum=0;
    int min=10000;

    for(i=a; i<=b; i++){
        
        for(j=2; j<=i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            sum+=i;
            if(min>i){
                min=i;
            }
    }

        }
        cout<<sum<<"\n"<<min;
}