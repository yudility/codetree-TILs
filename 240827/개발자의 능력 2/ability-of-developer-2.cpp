#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[6], ret=987654321;

int Get_diff(int x1, int x2, int y1, int y2){

    int sum1 = a[x1] + a[x2];
    int sum2 = a[y1] + a[y2];
    int sum3 = 0;
    for(int i =0; i<6 ; i++){
        sum3+=a[i];
    }

    sum3 = sum3 - (sum1+sum2);

    int max_t = max(sum1, max(sum2, sum3));
    int min_t = min(sum1, min(sum2, sum3));

    return max_t-min_t;
}

int main() {

    for(int i=0; i<6; i++){
        cin >> a[i];
    }

    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            for(int k=0; k<6; k++){
                if(k==i || k==j) continue;
                
                for(int q=0; q<6; q++){
                    if(q==i || q==j || q==k) continue;
                    ret=min(ret, Get_diff(i,j,k,q));
                }
            }
        }
    }

    cout << ret;

    return 0;
}