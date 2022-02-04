#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=1; i<=test; i++){
        int te;
        double len, a,b, pari;
        cin>>te>>len>>a>>b>>pari;

        double ab = a+b;
        double re = len / ab * pari;

        cout<<fixed;
        cout.precision(6);
        cout<<i<<" "<<re<<"\n";
    }

}

// cout<<fixed;
// cout.precision(6)
// ================
// 정수 부분은 고정
// 소수점 부분은 6까지 나타냄