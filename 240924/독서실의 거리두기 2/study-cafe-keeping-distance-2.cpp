#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ret, n;
string s;


int main() {

    cin >> n;
    cin >> s; 

    int prev = 0; // 처음 최소 한개 이상의 1이 주어짐
    int left=0, right=n-1;
    int max_dist=0;
    for(int i=1; i<n; i++){
        if(s[i]=='1'){
            int dist=i-prev;
            if(max_dist<dist){
                left=prev;
                right=i;
                max_dist=dist;
            }
            prev=i;
        }
    }

    s[(left+right)/2] = '1';
    
    prev=0;
    int min_dist=10000;
    for(int i=1; i<n; i++){
        if(s[i]=='1'){
            min_dist=min(min_dist, i-prev);
            prev=i;
        }
    }

    s[(left+right)/2] = '0';
    if(s[n-1]=='0'){
        s[n-1]='1';
        prev=0;
        int min_dist_2=10000;
        for(int i=1; i<n; i++){
            if(s[i]=='1'){
                min_dist_2 = min(min_dist_2, i-prev);
                prev=i;
            }
        }
        min_dist=max(min_dist, min_dist_2);
    }

    ret=min_dist;

    cout << ret;

    return 0;
}