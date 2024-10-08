#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char r;
int n, m;
list<char> l;
list<char>::iterator it;


int main() {
    
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        char code;
        cin >> code;
        l.push_back(code);
    }

    it=l.end();

    for(int i=0; i<m; i++){
        cin >> r;
        if(r=='L' && it!=l.begin()){
            it--;
        }
        else if(r=='R' && it!=l.end()){
            it++;
        }
        else if(r=='P'){
            char bread;
            cin >> bread;
            l.insert(it, bread);
        }
        else if(r=='D'&& it!=l.end()){
            it = l.erase(it);
        }
    }

    for(it = l.begin(); it != l.end(); it++) { 
        cout << *it;                   
    } 


    return 0;
}