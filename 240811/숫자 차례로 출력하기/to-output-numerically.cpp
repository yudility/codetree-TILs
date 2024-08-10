#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
void PrintNum1(int n) {        
    if(n == 0) return;
    PrintNum1(n-1);
    cout << n <<" ";  

}

void PrintNum2(int n) {        
    if(n == 0) return;          
    cout << n<<" ";
    PrintNum2(n-1);
}



int main() {
    cin >> n;
    PrintNum1(n);
    cout << "\n";
    PrintNum2(n);
    return 0;
}