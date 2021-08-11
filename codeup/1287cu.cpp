#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;
    int sum;
    for(int i=1; i<=9; i++){
        sum=i*n;
        for(int j=1; j<=sum; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}