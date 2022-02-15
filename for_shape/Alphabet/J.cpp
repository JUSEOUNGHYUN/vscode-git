#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0){
                cout<<"*";
            }
            else if(i<=n/2){
                if(j==n/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i==n-1){
                if(j==0){
                    cout<<" ";
                }
                else if(j<n/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i>n/2){
                if(j==0||j==n/2){
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

// J
// n = 5
/*
*****
  *
  *
* *
 *
*/
