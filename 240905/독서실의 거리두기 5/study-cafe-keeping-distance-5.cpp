#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, ret;
string str;

int main() {

    cin >> n;
    cin >> str;

    for(int i=0; i<n; i++){ //i는 사람을 넣을 자리
        int dis=n; //최소 거리
        if(str[i]=='0'){ 
            int prev=-1;
            for(int j=0; j<n; j++){
                if(prev==-1 && str[j] =='1') prev=j;
                else if(j==i || str[j]=='1') {
                    dis = min(dis,(j-prev));
                    prev=j;
                }
            }
            ret = max(ret, dis);
        }
    }

    cout << ret;

    return 0;
}