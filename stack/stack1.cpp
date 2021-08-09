#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,a;
    cin>>n;

    stack<int> st;
    string str;

    for(int i=0; i<n; i++){
        cin>>str;

        if(str=="push"){
            cin>>a;
            st.push(a);
        }

        else if(str=="pop"){
            if(!st.empty()){
                cout<<st.top()<<"\n";
                st.pop();
            }
            else{
                cout<<"-1"<<"\n";
            }
        }

        else if(str=="size"){
            cout<<st.size()<<"\n";
        }

        else if(str=="empty"){
            if(st.empty()){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }

        else if(str=="top"){
            if(st.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<st.top()<<"\n";
            }
        }
    }

    return 0;
}
