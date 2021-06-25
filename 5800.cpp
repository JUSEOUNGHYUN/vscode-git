#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);                         //입출력 향상

    int k,n;

    cin>>k;

    for(int i=0; i<k; i++){              //몇개의 클래스가 있는지 입력 받음   
        
        int max=0, min=100, gat=0;
        cin>>n;
        vector<int>v(n);                 //v는 기본값으로 초기화된  n개의 원소를 갖는다.
                            //vector<int>v(n,x) :  v는 x값으로 초기화된  n개의 원소를 갖는다.

        for(int j=0; j<n; j++){

            cin>>v[j];
            if(v[j]>max)
            max=v[j];
            if(min>v[j]) 
            min=v[j];
        }

        sort(v.begin(), v.end());

        for(int j=1; j<n; j++){
            if(gat<v[j]-v[j-1])
            gat=v[j]-v[j-1];
        }

        cout << "Class " << i+1 << endl;
        cout << "Max " << max << ", Min " << min << ", Largest gap " << gat << endl;
    }

    return 0;
}