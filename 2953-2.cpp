#include <iostream>

using namespace std;

int main() {

    int a,b,c,d;
    int sum=0, max=0;
    int index;

    for(int i=0; i<5; i++){
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        if(sum>max){
        max=sum;
        index=i;
        }
    }

    cout<<index+1<<" "<<max;
}