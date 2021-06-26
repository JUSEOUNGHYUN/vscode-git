#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[10001]={0, };

    int n,b;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>b;
        a[b]++;
    }

    for(int i=0; i<10001; i++){
        for(int j=0; j<a[i]; j++)
            cout<<i<<"\n";
    }

}