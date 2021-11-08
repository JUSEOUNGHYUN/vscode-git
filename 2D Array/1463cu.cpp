#include <iostream>

using namespace std;

int main() {

    int a[101][101]={};

    int test;
    cin>>test;

    int x=1;

    for(int i=1; i<=test; i++){
        for(int j=1; j<=test; j++){
            a[j][i]=x;
            x++;
        }
    }

    for(int i=test; i>0; i--){
        for(int j=1; j<=test; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

// 3 6 9
// 2 5 8
// 1 4 7 