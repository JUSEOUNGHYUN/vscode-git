#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();
    st.pop();
    st.pop();

    cout<<st.top()<<"\n";

}


// Last In First Out LIFO
// 쌓여있는 접시