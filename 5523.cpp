#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a,b;
    int aw=0,bw=0;

    for(int i=0; i<n; i++){

        cin>>a>>b;

        if(a>b){
            aw++;
        }
        else if(a<b){
            bw++;
        }


    }

    cout<<aw<<" "<<bw;
}