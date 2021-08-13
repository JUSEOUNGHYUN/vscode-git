#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int arr[10]={0,};

    int n,b;
    cin>>n>>b;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //cout<<count(arr,arr+10,b);
    //1번째 방법

    vector<int> v(arr, arr+10);
    int cnt= count(v.begin(), v.end(), b);
    cout<<cnt<<"\n";
}