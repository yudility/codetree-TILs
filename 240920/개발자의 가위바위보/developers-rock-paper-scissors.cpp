#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[100], b[100], n, ret;

int main() {

    cin >> n;

    for(int i=0; i<n; i++)
        cin >> a[i] >> b[i];

    int win=0;
    for(int i=0; i<n; i++){ 
        if(a[i]==1 && b[i]==2){ // (1, 2) 
            win++;
        }
        else if(a[i]==2 && b[i]==3){ //(2, 3)
            win++;
        }
        else if(a[i]==3 && b[i]==1){ //(3, 1)
            win++;
        }
    }
    ret=max(ret, win); 

    win =0;
    for(int i=0; i<n; i++){ 
        if(a[i]==2 && b[i]==1){ // (2, 1) 
            win++;
        }
        else if(a[i]==1 && b[i]==3){ //(1, 3)
            win++;
        }
        else if(a[i]==3 && b[i]==2){ //(3, 2)
            win++;
        }
        
    }
    ret=max(ret, win); 
    
    cout << ret;


    return 0;
}