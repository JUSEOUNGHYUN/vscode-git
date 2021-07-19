#include <iostream>

using namespace std;

int main() {

    int a,b,c,n,re; // a는 시작 값, b는 곱할 값, c는 더할 값
    cin>>a>>b>>c>>n;
    re =a;
   

    for(int i=2; i<=n; i++){
        re=re*b+c;
    }
    
    cout<<re;

}