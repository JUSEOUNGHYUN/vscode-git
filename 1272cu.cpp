#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;
    int a[1000];
    int max=-1001;

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i]>max)
        max=a[i];
    }

    cout<<max;
}