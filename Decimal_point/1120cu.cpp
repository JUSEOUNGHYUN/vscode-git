#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    double avg=a+b+c;

    cout<<fixed;
    cout.precision(2);
    cout<<(double)(avg)/3;

}