#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        if(i<n/2){
            for(int j=0; j<i; j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0; j<n-2-(i*2); j++){
                cout<<" ";
            }
            cout<<"*";
        }
        else if(i==n/2){
            for(int j=0; j<n; j++){
                if(j==n/2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        else if(i>n/2){
            for(int j=0; j<n-1-i; j++){
                cout<<" ";
            }
            cout<<"*";
            for(int j=0; j<(i*2)-n; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
}