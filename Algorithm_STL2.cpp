#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
             pair<string, pair<int, int> > b) {
    if(a.second.first == b.second.first) {
        return a.second.second > b.second.second;
    } else {
        return a.second.first > b.second.first;
    }
}
int main(void){
    vector<pair<string, pair<int, int> > > v;
    v.push_back(pair<string, pair<int, int> >("ha", pair<int, int>(90,970207)));
    v.push_back(pair<string, pair<int, int> >("lim", pair<int, int>(97,970823)));
    v.push_back(pair<string, pair<int, int> >("choi", pair<int, int>(90,970630)));

    sort(v.begin(),v.end(), compare);
    for(int i = 0; i<v.size(); i++){
        cout << v[i].first << ' ';
    }
}
