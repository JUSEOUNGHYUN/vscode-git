#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    int prize=0;
    int max=0;
    cin>>a>>b>>c;

    if(a==b && a==c && b==c)
    prize = 10000+a*100;
    
    else if(a==b || a==c)
    prize = 1000+a*100;
    else if(b==c) 
    prize=1000+b*100;

    else{
    if
        (a>b && a>c)
        max = a;
    else if(b>a && b>c)
        max = b;
    else if(c>a && c>b)
        max = c;

        prize = max*100;
    }

    cout<<prize;
}