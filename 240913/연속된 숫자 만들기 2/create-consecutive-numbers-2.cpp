#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[3], ret;

int main() {

    for(int i=0; i<3; i++){
        cin >> a[i];
    }

    sort(a, a+3);

    if(a[0]+1 == a[1] && a[1]+1 == a[2] ){
        cout << 0;
        return 0;
    }

    while(true){
        //가까운거 고르기
        if(a[1]-a[0]< a[2]-a[1]){
            a[0] = (a[2]+a[1])/2;
        }else{
            a[2] = (a[0]+a[1])/2;
        }
        sort(a, a+3);
        ret++;
        if(a[0]+1 == a[1] && a[1]+1 == a[2] ){
            break;
        }
    }

    cout << ret;

    
    return 0;
}