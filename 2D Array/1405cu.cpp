#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int arr[1000]={};

    for(int i=0; i<test; i++){
        cin>>arr[i];
    }

    int cnt=0;

    for(int j=0; j<test; j++){
        cnt=j;
        for(int k=0; k<test; k++){
            cout<<arr[cnt]<<" ";
            cnt++;
            if(cnt==test){      
                cnt=0;          // 다시 0부터 출력
            }
        }
        cout<<"\n";
    }
    return 0;
}