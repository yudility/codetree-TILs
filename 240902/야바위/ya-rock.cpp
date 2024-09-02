#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100], c[100], ret;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    
    // 셋중 하나 고르기
    for(int t=1; t<=3; t++){
       
        int s = t; // s를 t위치에 넣는다.
        int cnt=0;

        //n번 만큼 반복
        for(int i=0; i<n; i++){
            //s가 a[i]에 있거나, b[i]에 있다면 바꾼다.
            if(s==a[i]){
                s=b[i];
            }
            else if(s==b[i]){
                s=a[i];
            }
            // s가 c[i]에 있다면 ++
            if(s==c[i])cnt++;
        }

        ret = max(ret, cnt); 

    }

    cout << ret;

    return 0;
}