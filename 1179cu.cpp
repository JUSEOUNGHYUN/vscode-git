#include <iostream>

using namespace std;

int main() {

    int h,m;
    cin>>h>>m;

    if(m<30){
        if(h==0){
            h=24;
        }
        h-=1;
        m=m+30;
        cout<<h<<" "<<m;
    }

    else {
        cout<<h<<" "<<m-30;
    }

    return 0;
}