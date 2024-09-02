#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int x, y, cnt;

int main() {

    cin >> x >> y;

    for(int i=x; i<=y; i++){
        stack<char> s;
        string ns = to_string(i);

        for(int j=0; j<ns.length()/2; j++){
            s.push(ns[j]);
        }
        int center=ns.length()/2;
        if(ns.length()%2 ==1) center++;
        
        for(int j=center; j<ns.length(); j++ ){
            if(s.top()==ns[j]) s.pop();
            else break;
        }
        
        if(s.size()==0) cnt++;
    
    }
    cout << cnt;
    
    return 0;
}