#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a[100];

    int sum=0, add=1;

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            sum+=add;
            add++;
        }
        if(a[i]==0){
            add=1;
        }
    }
    cout<<sum;

}