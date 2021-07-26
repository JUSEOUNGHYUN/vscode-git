#include <iostream>

using namespace std;

int main() {

    int a,b;
    cin>>a;

    int sum=0, sco=1;

    for(int i=0; i<a; i++){
        cin>>b;

        if(b==1){
            sum+=sco;
            sco++;
        }

        if(b==0){
            sco=1;
        }
    }

    cout<<sum;
}