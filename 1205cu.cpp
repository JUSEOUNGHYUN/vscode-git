#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int a,b;
    double temp;
    cin>>a>>b;

    temp=a+b;

    if(a-b>temp){
        temp=a-b;
    }

    if(b-a>temp){
        temp=b-a;
    }

    if(a*b>temp){
        temp=a*b;
    }

    if((double)a/b>temp){
        temp=(double)a/b;
    }

    if((double)b/a>temp){
        temp=(double)b/a;
    }

    if(pow(a,b)>temp){
        temp=pow(a,b);
    }

    if(pow(b,a)>temp){
        temp=pow(b,a);
    }

    cout<<fixed<<setprecision(6)<<temp;

    return 0;

    
}