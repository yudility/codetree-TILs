#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, s[100];
char c[100];


int main() {

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c[i] >> s[i];
    }

    int a=0, b=0, cnt=0;
    int top=3;
    for(int i=0; i<n; i++){
        int now;
        if(c[i]=='A'){
            a+=s[i];
        }else if(c[i]=='B'){
            b+=s[i];
        }

        if(a==b) now=3;
        else if(a>b) now=2;
        else if(a<b) now=1;

        if(top!=now){
            top=now;
            cnt++;
        }
    }

    cout << cnt;


    return 0;
}