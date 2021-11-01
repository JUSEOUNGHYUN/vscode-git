#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a,b;
    char c;
    cin>>a>>c>>b;

    if(c=='+'){
        cout<<a+b;
    }

    else if(c=='-'){
        cout<<a-b;
    }

    else if(c=='*'){
        cout<<a*b;
    }

    else if(c=='/'){
        cout<<fixed;
        cout.precision(2);
        cout<<(double)a/b;
    }

    return 0;
}