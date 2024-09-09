#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int INF=9876545;
int n,ret;
string s;

//최소 거리 구하기
int get_min_dist(){
    int dist=INF, prev=-1;
    for(int i=0; i<n; i++){
        if(s[i]=='0') continue;

        if(prev==-1){
            prev=i;
        }
        else {
            dist= min(dist, i-prev);
            prev=i;
        }
    }

    return dist;
}

int main(){

    cin >> n;
    cin >> s;
 
    //자리 지정 하기(두 번)
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1') continue;
        s[i]='1';
        for(int j=0; j<s.size(); j++){
            if(s[j]=='1') continue;
            s[j]='1';
            ret=max(ret, get_min_dist());
            s[j]='0';
        } 
        s[i]='0';
    }


    cout << ret;

    return 0;
}