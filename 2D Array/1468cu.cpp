#include <iostream>

using namespace std;

int main() {

    int a[101][101]={};

    int test,i;
    cin>>test;

    int x=1;

    for(i=1; i<=test; i++){
        for(int j=1; j<=test; j++){
            a[i][j]=x;
            x++;
        }
    }

    for(int i=1; i<=test; i++){
        if(i%2==0){
            for(int j=test; j>0; j--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=1; j<=test; j++){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}