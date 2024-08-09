#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string s;
int cnt;

int main() {

    cin >> s;

    for(int i=1; i<s.size(); i++){
        if(s[i-1]=='(' && s[i]=='('){
            for(int j=i+1; j<s.size(); j++){
                if(s[j-1]==')'&& s[j]==')') cnt++;
            }
        }
    }
    
    cout << cnt;

    return 0;
}