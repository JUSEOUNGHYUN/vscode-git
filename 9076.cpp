#include <iostream>

using namespace std;

int main() {

    int a[5]={0,};

    int tmp;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin>>a[j];
        }

        for(int k=0; k<5; k++){
            for(int m=0; m<5; m++){
                if(a[k]<a[m]){
                    tmp=a[k];
                    a[k]=a[m];
                    a[m]=tmp;
                }
            }
        }

        if(a[3]-a[1]>=4) cout<<"KIN"<<"\n";
        else cout<<a[1]+a[2]+a[3]<<"\n";
    }
}