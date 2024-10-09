#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a[101];

int main() {

    cin >> n;

    for(int i=0; i <n; i++) 
        cin >> a[i];


    for(int i=0; i <n; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(a[j]< a[min_idx]){
                min_idx=j;
            }
        }
        int tmp = a[i];
        a[i]=a[min_idx];
        a[min_idx]=tmp;
    }

    for(int i=0; i <n; i++){
        cout << a[i] << " ";
    }

    return 0;
}