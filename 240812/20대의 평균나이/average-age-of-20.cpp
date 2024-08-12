#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a, sum, cnt;
double ret;

int main() {

    while(true){
        scanf("%d", &a);

        if( a< 20 || a >=30){
            break;
        }
        else{
            sum+=a;
            cnt++;
        }
    }

    ret = (double)sum/cnt;

    printf("%0.2f", ret);

    return 0;
}