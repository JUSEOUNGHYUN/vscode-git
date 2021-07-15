#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int sum=0, i=0;

    while(true){
        i++;
        sum+=i;
        if(sum>=n){
            break;
        }
    }
    cout<<i;
}
