#include <iostream>

using namespace std;

int main() {

    int n;
    int y,k;
    int ys=0, ks=0;

    cin>>n;

    for(int i=0; i<n; i++){
        for(int i=0; i<9; i++){
            cin>>y>>k;
            ys+=y;
            ks+=k;
        }

        if(ys>ks){
            cout<<"Yonsei"<<"\n";
        }
        else if(ys==ks){
            cout<<"Draw"<<"\n";
        }
        else if(ys<ks){
            cout<<"Korea"<<"\n";
        }
    }
    return 0;
}