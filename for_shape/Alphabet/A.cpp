#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a = n+n-1;

    for(int i=0; i<n; i++){
        for(int j=0; j<a/2-i; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i>0){
            for(int j=0; j<i*2-1; j++){
                if(i==n/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

// A
// n = 5
/*
    *
   * *
  *****
 *     *
*       *
*/