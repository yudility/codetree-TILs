#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n[15], t[15];


bool isNum(){
    sort(t, t+15);

    for(int i=0; i<15; i++){
        if(n[i]!=t[i]) return false;
    }
    return true;
}

int main() {

    for(int i=0 ; i< 15; i++){
        cin >> n[i];
    }

    sort(n, n+15);

    for(int a=1; a<=40; a++){
        for(int b=1; b<=40; b++){
            for(int c=1; c<=40; c++){
                for(int d=1; d<=40; d++){
                    t[0]=a;
                    t[1]=b;
                    t[2]=c;
                    t[3]=d;
                    t[4]=a+b;
                    t[5]=b+c;
                    t[6]=c+d;
                    t[7]=d+a;
                    t[8]=a+c;
                    t[9]=b+d;
                    t[10]=a+b+c;
                    t[11]=a+b+d;
                    t[12]=a+c+d;
                    t[13]=b+c+d;
                    t[14]=a+b+c+d;

                    if(isNum()){
                        cout << a << " " << b << " " << c << " " << d << " ";
                        return 0;
                    }
                }
            }
        }
    }
    

    return 0;
}