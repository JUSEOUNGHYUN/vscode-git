#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    int day=1;

    while(day%a!=0||day%b!=0||day%c!=0)
        day++;

        cout<<day;

}

