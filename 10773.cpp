#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> st;

    int n;
    cin>>n;
    int sum=0;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a==0){
            st.pop();
        }
        else {
            st.push(a);
        }
    }

    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }

    cout<<sum<<"\n";

    return 0;
}