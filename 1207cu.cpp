#include <iostream>

using namespace std;

int main() {

    int a[4]={0,};
    int tmp=0;
    
    for(int i=0; i<4; i++){
        cin>>a[i];

        if(a[i]==1){
            tmp++;
        }
    }

    if(tmp==1){
        cout<<"도";
    }

    else if(tmp==2){
        cout<<"개";
    }

    else if(tmp==3){
        cout<<"걸";
    }

    else if(tmp==4){
        cout<<"윷";
    }

    else if(tmp==0){
        cout<<"모";
    }
}