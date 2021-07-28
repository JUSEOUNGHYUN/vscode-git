#include <iostream>

using namespace std;

int main() {

    int a[1001]={0,};
    int n, max=0, sum=0;

    for(int i=0; i<10; i++){
        cin>>n;
        sum+=n;
        a[n/10]++;
    }

    for(int i=0; i<100; i++){
        if(a[i]>max)
        max=i;
    }

    cout<<sum/10<<"\n"<<max*10;
}