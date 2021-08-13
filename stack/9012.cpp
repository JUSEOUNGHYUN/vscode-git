#include <iostream>
#include <stack>
#include <string>

using namespace std;

/*
여는 괄호 일때 (
push

닫는 괄호 일때 )
1) 스택 내부에 여는 괄호가 있다 -> pop
2) 없다 false

문자열을 다 확인했는데
스택 내부에 여는 괄호가 있을때 false
*/

bool check(string str){
    
    stack<char> st;

    for(int i=0; i<str.length(); i++){
        char c=str[i];

        if(c=='('){
            st.push(str[i]);
        }
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty(); // 반복문이 끝나고 스택에 괄호가 남아있으면 flase
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    string str;
    
    for(int i=0; i<n; i++){
        cin>>str;

        if(check(str)){
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }

    
}