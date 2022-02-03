#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int t;
    cin>>t;
    
    int sum=0;
    int n;
    int cnt=0;

    for(int i=0; i<test; i++){
        cin>>n;
        sum+=n;
        if(sum<=t){
            cnt++;
        }
    }
    cout<<cnt;
}