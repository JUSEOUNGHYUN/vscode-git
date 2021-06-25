#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a[10];

    for(int i=0; i<9; i++){
        cin>>a[i];
    }

    sort(a,a+9);

    for(int i=0; i<9; i++){
        cout<<a[i]<<" ";
    }

    return 0;
    
}