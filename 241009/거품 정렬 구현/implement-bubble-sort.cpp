#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[101], n;

int main() {
    
    cin >> n;
    for(int i=0; i<n; i++) 
        cin >> a[i]; 

    bool sorted;
    do{
        sorted=true;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                int tmp = a[i];
                a[i]=a[i+1];
                a[i+1] =tmp;
                sorted =false;
            }
        }
    }while(!sorted);


    for(int i=0;i<n; i++){
        cout << a[i] << " ";
    }

    return 0;
}