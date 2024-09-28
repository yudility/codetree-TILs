#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int num[15];

int main() {

    for(int i=0; i<15; i++)
        cin >>num[i];

    
    sort(num, num+15);

    int a=num[0];
    int b=num[1];
    int c=num[2];
    int d=num[14]-a-b-c;

    cout << a << " " << b << " " <<  c << " " << d;


    return 0;
}