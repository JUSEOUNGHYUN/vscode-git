#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    cout<<"top"<<s.top()<<"\n";

    s.pop(); // 1삭제
    s.pop(); // 2삭제

    cout<<"stack size:"<<s.size()<<"\n";

    cout<<"is it empty?:"<<(s.empty() ? "yes":"no")<<"\n";

    return 0;
}