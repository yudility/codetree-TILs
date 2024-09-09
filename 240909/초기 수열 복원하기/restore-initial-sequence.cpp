#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, s[1002], used[1002];
//a 정답, v 저장소
//s는 입력 받을 인접한 원소의 합

int main() {

    cin >> n;

    for(int i=0; i<n-1; i++){
        cin >> s[i];
    }

    vector<int> v;
    for(int i=1; i<=n; i++){
        memset(used, 0, sizeof(used));
        v.clear();
        v.push_back(i);
        used[i]=1;

        for(int j=1; j<n; j++){
            v.push_back(s[j-1]-v[j-1]);
            used[s[j-1]-v[j-1]]++;
        }

        bool flag=true;
        for(int j=1; j<=n; j++){
            if(used[j]>1 || used[0]!=0){
                flag=false;
                break;
            }
        }
        if(flag) break;
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    
    return 0;
}