#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;

int main() {

    cin >> s;

    for(int i=0; i<s.size();i++){
        if(s[i]=='('){
            for(int j=i+1; j< s.size(); j++){
                if(s[j]==')') cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}