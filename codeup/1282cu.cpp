#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    int k,t;

    cin>>n;

    for(int i=1; i<=n; i++){
        if((n>=i*i)&&(n<(i+1)*(i+1))){
            k=n-i*i;
            t=i;
            break;
        }
    }
    cout<<k<<" "<<t;
}