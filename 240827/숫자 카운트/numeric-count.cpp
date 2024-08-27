#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int n, num[10], cnt1[10], cnt2[10], ret;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> num[i] >> cnt1[i] >> cnt2[i];
    }

    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int k=1; k<=9; k++){
                if( i==j || i==k|| j==k) continue;
                

                bool flag=true;

                for(int q=0; q<n; q++){
                    int x = num[q]/100;
                    int y = (num[q]-x*100)/10;
                    int z = num[q]%10;

                    int a =0, b=0;

                    if(x==i) a++;
                    if(y==j) a++;
                    if(z==k) a++;
    
                    if(x==j || x==k) b++;
                    if(y==i || y==k) b++;
                    if(z==i || z==j) b++;

                    if(cnt1[q] != a || cnt2[q]!=b){
                        flag = false;
                        break;
                    }

                }
                if(flag) ret++;
            }
        }   
    }

    cout << ret;
    
    return 0;
}