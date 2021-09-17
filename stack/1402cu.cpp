#include <iostream>
#include <stack>

using namespace std;

int main() {

    int n,a;
    cin>>n;

    stack<int> st;

    for(int i=0; i<n; i++){
        cin>>a;
        st.push(a);
    }

    for(int i=0; i<n; i++){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}