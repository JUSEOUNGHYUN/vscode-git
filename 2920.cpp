#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);            //입출력 향상

    vector<int>a(8);        //오름차순을 위한 배열
    vector<int>d(8);        //내림차순을 위한 배열
    vector<int>v(8);        //8개의 입력을 받기위한 배열

    for(int i=0; i<8; i++){
        cin>>v[i];          
        a=v;                
        d=v;                
    }

    sort(a.begin(), a.end());                   //오름차순 코드
    sort(d.begin(), d.end(), greater<int>());   //내림차순 코드

    if(v==a){
        cout<<"ascending";
    }
    else if(v==d){
        cout<<"descending";
    }
    else cout<<"mixed";
}
