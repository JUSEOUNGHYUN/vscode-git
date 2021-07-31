#include <iostream>

using namespace std;

int main() {

    int a[4];
    
    int index;
    int max=0;

    for(int i=0; i<5; i++){

        int sum=0;

        for(int i=0; i<4; i++){
            cin>>a[i];
            sum+=a[i];
        }
            if(sum>max){
            max=sum;
            index=i;
            }
    }

    cout<<index+1<<" "<<max;
}