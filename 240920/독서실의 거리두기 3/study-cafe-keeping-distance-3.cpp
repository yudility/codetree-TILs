#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret;
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
            int d = i-prev-2;
            if(d>max_dist){
                l=prev;
                r=i;
            }
            prev=i;
        }
    }
    
    a[(l+r/2)]='1';
    
    prev=0;
    for(int i=1; i<n; i++){
        if(a[i]=='1'){
            ret=max(ret,i-prev-2);
            prev=i;
        }
    }

    cout << ret;

    return 0;
}