#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a,f,m,l;

    for(int i=1; i<=n; i++){
        cin>>a;
        if(i==1){
            f=a;
        }
        if(i==(n+1)/2){
            m=a;
        }

        if(i==n){
            l=a;
        }
    }

    cout<<f<<" "<<m<<" "<<l;

}