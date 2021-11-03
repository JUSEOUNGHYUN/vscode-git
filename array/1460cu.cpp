#include <iostream>

using namespace std;

/*
int main() {
    int a[50];
    
    int test;
    cin>>test;

    for(int i=1; i<=test*test; i++){
        cout<<i<<" ";
        if(i%test==0){
        cout<<"\n";
        }
    }

    return 0;
}
*/

int main() {

    int a[101][101]={};

    int test;
    cin>>test;

    int x=1;

    for(int i=1; i<=test; i++){
        for(int j=1; j<=test; j++){
            a[i][j]=x;
            x++;
        }
    }

    for(int i=1; i<=test; i++){
        for(int j=1; j<=test; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;

}