#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n,test;
    cin>>n>>test;

    int arr[1001]={0};

    for(int i=0; i<test*2; i++){
        int a;
        cin>>a;
        arr[a]++;
    }

    for(int i=1; i<=n; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}