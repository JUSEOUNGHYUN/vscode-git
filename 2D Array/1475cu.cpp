#include <iostream>

using namespace std;

int main() {

    int a[101][101]={};

    int test,test1;
    cin>>test>>test1;

    int x=1;
    int k=1;

    for(int i=test1; i>0; i--){
        if(k%2==0){
            for(int j=test; j>0; j--){
                a[j][i]=x;
                x++;
            }
        }
        else{
            for(int j=1; j<=test; j++){
                a[j][i]=x;
                x++;
            }
        }
        k++;
    }

    for(int i=1; i<=test; i++){
        for(int j=1; j<=test1; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

// 5 4 1
// 6 3 2