#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ret;
string s;

int main() {

    cin >> s;

    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='1') s[i]='0';
        else if(s[i]=='0') s[i]='1';

        int num=0;

        for(int j=0; j<s.size(); j++){
            int n;
            if(s[s.size()-j-1]=='1') n=1;
            else n=0;

            for(int k=0; k<j; k++){
                n *= 2;
            }
            num += n; 
        } 

        ret=max(ret, num);

        if(s[i]=='1') s[i]='0';
        else if(s[i]=='0') s[i]='1';
    }

    cout << ret ;


    return 0;
}