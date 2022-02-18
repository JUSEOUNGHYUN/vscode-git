#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a = (n/2)+2;

    for(int i=0; i<n; i++){
        for(int j=0; j<a-i-1; j++){
            if(j==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*";
        if(i>n/2){
            for(int j=0; j<i-a+2; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

// K
// n = 5
/*
*  *
* *
**
* *
*  *
*/
