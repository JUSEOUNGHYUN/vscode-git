#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int a,b,c,re;
    cin>>a>>b>>c;

    re=a<b?a:b;
    re=re<c?re:c;

    cout<<re;

    
}