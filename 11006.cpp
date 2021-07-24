#include <iostream>

using namespace std;

int main() {

    int n,N,M;
    int U,T;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>N>>M;

        U=M-(N-M);
        T=N-M;

        cout<<U<<" "<<T<<"\n";
    }
}