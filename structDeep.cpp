#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class factory{

    public:

    int num;
    int gas;

    factory(int n, int g){
        num=n;
        gas=g;
    }
};

bool compare(const factory& a, const factory& b){
    if(a.num==b.num){
        return a.gas<b.gas;
    }
    return a.num<b.num;
}

int main() {

    vector<factory> v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back(factory(x,y));
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n; i++){
        cout<<v[i].num<<" "<<v[i].gas<<" ";
    }
}
