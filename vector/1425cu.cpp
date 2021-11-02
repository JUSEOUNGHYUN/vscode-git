#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n,c,i,cnt=1;
    cin>>n>>c;

    vector<int> vec(n);

    for(i=0; i<n; i++){
        cin>>vec[i];
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<n; i++){

        cout<<vec[i]<<" ";

        if(cnt%c==0){
            cout<<"\n";
        }
        cnt++;
    }

    return 0;
}