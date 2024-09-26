#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, s[100], cnt;
char ch[100];

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> ch[i] >> s[i];
    }

    int top=7;
    for(int i=0; i<n; i++){
        int now;
        if(ch[i]=='A'){
            a+=s[i];
        }
        else if(ch[i]=='B'){
            b+=s[i];
        }
        else if(ch[i]=='C'){
            c+=s[i];
        }

        if( a == b && b == c) now = 7;
        else if(a == b && a > c) now = 6;
        else if(a == c && a > b) now = 5;
        else if(b == c && b > a) now = 3;
        else if(a > b && a > c) now = 4;
        else if(b > c && b > a) now =2;
        else if(c > b && c > a) now =1;

        if(now != top){
            cnt++;
            top=now;
        }
    }

    cout << cnt;
    return 0;
}