#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int as=100, bs=100;

    int a,b;

    for(int i=0; i<n; i++){
        cin>>a>>b;

        if(a>b){
            bs-=a;
        }
        else if(a<b){
            as-=b;
        }
    }

    cout<<as<<"\n"<<bs;
}