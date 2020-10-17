//
// Created by Howard_Yu on 2020/10/17.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    struct book_info{
        string title;
        int prize;
    }libary[10]{};
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++){
        cin >> libary[i].title >> libary[i].prize;
    }
    sort(libary, libary+n, [](book_info a, book_info b){
        if(a.prize>b.prize) return false;
         return a.title<b.title;
    });
    for (int i=0 ; i<n ; i++){
        cout << libary[i].title << " " << libary[i].prize<< " ";
    }
}