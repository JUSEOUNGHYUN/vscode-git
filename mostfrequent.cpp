#include <iostream>

using namespace std;

int main() {

    int a;
    int arr[1001]={0,};
    int max=0;

    for(int i=0; i<10; i++){
        cin>>a;
        arr[a/10]++;
    }

    for(int i=1; i<=100; i++){
        if(arr[i]>max)
        max=i;
    }

    cout<<max*10<<"\n";
    cout<<arr[max];
}