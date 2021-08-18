#include <iostream>

using namespace std;

int main() {

    int test;   // 테스트 케이스 수
    cin>>test;

    for(int i=0; i<test; i++){
        int s;  // 자동차 가격    
        cin>>s;

        int n;  // 자동차 옵션 종류
        cin>>n;
        for(int i=0; i<n; i++){
            int q,p;  // 자동차 옵션1 , 개수  
            cin>>q>>p;
            s+=q*p;
        }
        cout<<s<<"\n";
    }
}