#include <iostream>

using namespace std;

int main() {

    int a[100];
    int n;
    cin>>n;

    int min=100, max=0;

    for(int i=0; i<n; i++){

        cin>>a[i];

        if(a[i]>max)
        max=a[i];

        if(min>a[i])
        min=a[i];

    }

    cout<<max<<" "<<min;
}