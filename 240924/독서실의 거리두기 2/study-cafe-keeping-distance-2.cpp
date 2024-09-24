#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ret, n, start, e;
string s;

void getStartEnd(){
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
            start=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(s[i]=='1'){
            e=i;
            break;
        }
    }
}

int getMinDist(int start_, int end_){
    int prev=start_;
    int min_dist=10000;
    for(int i= start_+1; i<=end_; i++){
        if(s[i]=='1'){
            min_dist=min(min_dist, i-prev);
            prev=i;
        }
    }
    return min_dist;
}


int main() {

    cin >> n;
    cin >> s; 

    getStartEnd();

    int prev = start; 
    int left=0, right=n-1;
    int max_dist=0;
    for(int i=start+1; i<=e; i++){
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
    
    ret=max(ret,getMinDist(start, e));

    s[(left+right)/2] = '0';

    if(start!=0){
        s[0]='1';
        ret=max(ret,getMinDist(0, e));
        s[0]='0';
    }
    if(e!=n-1){
        s[n-1]='1';
        ret=max(ret,getMinDist(start, n-1));
        s[n-1]='0';
    }

    cout << ret;

    return 0;
}