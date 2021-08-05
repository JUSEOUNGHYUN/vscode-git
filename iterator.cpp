#include <iostream>
#include <vector>

using namespace std;

int main() {

    //백터 선언
    vector<int> v= {1,2,3};

    //반복자 선언
    vector<int>::iterator i;

    int j;

    //반복자를 사용하여 요소 삽입
    for(i=v.begin(); i!=v.end(); ++i){
        if(i==v.begin()){
            i=v.insert(i,5);    //v 시작 부분에 5삽입
        }
    }

    // v contains 5 1 2 3

    //반복자를 사용하여 요소 제거
    for(i=v.begin(); i!=v.end(); ++i){
        if(i==v.begin()+2){     //다음요소 제거
            i=v.erase(i);
        }
    }

    // v contains 5 2 3


    //반복자를 사용하여 요소에 접근
    for(i=v.begin(); i!=v.end(); ++i){
        cout<<*i<<" ";
    }

    return 0;
    

}