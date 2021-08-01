#include <iostream>

using namespace std;

int main() {

    int a,n;
    cin>>a;

    while(a--){
        cin>>n;
        int digit=0;
        while(n>0){
            if(n%2==1){
                cout<<digit<<" ";
            }
            n/=2;
            digit++;
        }
    }
}