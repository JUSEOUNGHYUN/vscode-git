#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;
    int cnt1=0;

    for(int i=0; i<test; i++){
        int n;
        cin>>n;

        int cnt=0;

        for(int i=1; i<=n; i++){
            if(n%i==0){
                cnt++;
            }
        }
        if(cnt==2){ // 소수는 1과 자기자신만 나눌때 나머지가 0이기 때문에 2가 맞다.
            cnt1++;
        }
    }
    cout<<cnt1;
    return 0;
}