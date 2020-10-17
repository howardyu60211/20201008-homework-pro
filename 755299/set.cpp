//
// Created by Howard_Yu on 2020/10/17.
//

#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

void out_put(vector<int> res){for (int i=0 ; i<res.size() ; i++)cout << res.at(i) << " ";};

int main(){
    int an, bn, temp;
    set<int> a, b;
    vector<int> res;
    cin >> an >> bn;
    for (int i=0 ; i<an ; i++) {
        cin >> temp;
        a.insert(temp);
    }
    for (int i=0 ; i<bn ; i++) {
        cin >> temp;
        b.insert(temp);
    }
    set_union(a.begin(), a.end(), b.begin(), b.end(), insert_iterator<vector<int>>(res,res.begin()));
    out_put(res);cout << endl;
    set_difference(a.begin(), a.end(), b.begin(), b.end(), insert_iterator<vector<int>>(res,res.begin()));
    out_put(res);cout << endl;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), insert_iterator<vector<int>>(res,res.begin()));
    out_put(res);cout << endl;
}