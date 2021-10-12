#include <iostream>

using namespace std;

int main() {

    int a[24]={0};

    int n,t;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>t;
        a[t]+=1;
    }

    for(int i=1; i<=23; i++){
        cout<<a[i]<<" ";
    }
}