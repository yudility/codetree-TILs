#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret;
string str;

int get_dis(){
    int dis=n;

    for(int i = 0; i < n; i++){
        if(str[i]=='0') continue;
        for(int j = i + 1; j < n;  j++){
            if( str[i]=='1' && str[j]=='1'){
                dis = min(dis, j-i);
            }
        }
    }
    return dis;
}

int main() {

    cin >> n;
    cin >> str;

    for(int i=0; i<n; i++){ //i는 사람을 넣을 자리
        if(str[i]=='0'){

            str[i]='1';

            ret = max(ret, get_dis());

            str[i]='0';

        }
        
    }

    cout << ret;

    return 0;
}