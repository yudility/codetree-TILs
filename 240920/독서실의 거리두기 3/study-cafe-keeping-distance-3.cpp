#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret=10000;
string s;
char a[1001];

int main() {

    cin >> n; 
    cin >> s;

    int l=0, r=n-1, prev, max_dist=0;
    prev=0;
    for(int i=1; i<n; i++){
        a[i]=s[i];
        if(a[i]=='1'){
            int d = i-prev;
            if(d>max_dist){
                l=prev;
                r=i;
                max_dist=d;
            }
            prev=i;
        }
    }
    
    a[(l+r)/2]='1';
    
    prev=0;
    for(int i=1; i<n; i++){
        if(a[i]=='1'){
            ret=min(ret,i-prev);
            prev=i;
        }
    }

    cout << ret;

    return 0;
}