#include <iostream>

using namespace std;

int main() {

    int n;
    int a[20][20]={0,};
    cin>>n;

    int x,y;

    for(int i=1; i<=n; i++){
        cin>>x>>y;
        a[x][y]=1;
    }

    for(int i=1; i<=19; i++){
        for(int j=1; j<=19; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}