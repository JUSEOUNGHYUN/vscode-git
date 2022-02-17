#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a = n+n-1;

    for(int i=0; i<n; i++){
        for(int j=0; j<a; j++){
            if(j==0||j==a-1){
                cout<<"*";
            }
            else if(i==j||a-i-1==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

// M
// n = 5
/*
*       *
**     **
* *   * *
*  * *  *
*   *   *
*/