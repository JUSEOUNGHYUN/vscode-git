#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int index;
    cin>>index;

    for(int i=1; i<=n; i+=2){
        index=i;
    }

    cout<<index;
}