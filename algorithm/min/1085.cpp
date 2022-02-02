#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int x,y,w,h;
    cin>>x>>y>>w>>h;

    int mx=w-x;
    int my=h-y;

    int small = min({mx, my, x, y});

    cout<<small;
}

//4개의 수중에서 가장 작은 값을 출력하는 코드