#include <iostream>

using namespace std;

int main() {

    int a[101][101]={};

    int test,test1;
    cin>>test>>test1;

    int x=1;

    for(int i=1; i<=test; i++){
        for(int j=1; j<=test1; j++){
            a[i][j]=x;
            x++;
        }
    }

    for(int i=test; i>0; i--){
        for(int j=test1; j>0; j--){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}