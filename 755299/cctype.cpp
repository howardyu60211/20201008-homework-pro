//
// Created by Howard_Yu on 2020/10/15.
//

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char a;
    do{
        cin.get(a);
        if(isupper(a)) {
            cout.put(tolower(a));
        } else if (islower(a)){
            cout.put(toupper(a));
        }
    }while (a!='\n');

}
