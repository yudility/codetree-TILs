#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x, y, cnt;

int main() {

    cin >> x >> y;

    for(int i=x; i<=y; i++){
        stack<char> s;
        string ns = to_string(i);

        bool odd =(ns.length()%2 ==1);
            
        for(int j=0; j<ns.length(); j++ ){
            if(odd && j==(ns.length()/2)) continue;
            
            if(!s.empty() && s.top()==ns[j]) s.pop();
            else s.push(ns[j]);

        }
        if(s.size()==0) cnt++;
    }
    cout << cnt;
    
    return 0;
}