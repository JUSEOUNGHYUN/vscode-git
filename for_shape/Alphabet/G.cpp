#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a = (n-1)/2;

    for(int i=0; i<n; i++){
        if(i==0||i==n-1){
            for(int j=0; j<n; j++){
                if(j==0){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        }
        else if(i<n/2){
            for(int j=0; j<n; j++){
                if(j==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        else if(i==n/2){
            for(int j=0; j<n; j++){
                if(j==0){
                    cout<<"*";
                }
                else if(j<=n/2){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        }
        else{
            for(int j=0; j<n; j++){
                if(j==0||j==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}

// G
// n = 7
/*
 ******
*
*
*   ***
*     *
*     *
 ****** 
*/

// n = 5
/*
 ****
*
*  **
*   *
*****
*/

/*
 **
* *
 **
*/