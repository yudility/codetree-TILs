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
       
        int l= a[1]-a[0];
        int r= a[2]-a[1];

        if(r==2 || l==2){
            ret++;
            break;
        }
        else if(l>=r){  
            a[2]=(a[0]+a[1])/2;
        }else if(l<r){
            a[0]=(a[2]+a[1])/2;
        }
        ret++;
        sort(a, a+3);

    }

    cout << ret;

    
    return 0;
}