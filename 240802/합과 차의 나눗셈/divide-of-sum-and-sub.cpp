#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b;
    scanf("%d %d", &a, &b);

    printf("%0.2f",round(((a+b)/(a-b))*100)/100) ;
    
    return 0;
}