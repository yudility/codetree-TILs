#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, s[1001];
vector<int> v;

bool isSeq(){
    for(int i=0; i<n-1; i++){
        if(s[i]!=(v[i]+v[i+1])) {
            return false;
        }
    }
    return true;
}

void printSeq(vector<int> &v){
    for(int i=0; i<n; i++) cout << v[i] << " ";
}

int main() {

    cin >> n;

    for(int i=0; i<n-1; i++){
        cin >> s[i];
    }
    
    for(int i=1; i<n+1; i++){
        v.push_back(i);
    }

    do{
        if(isSeq()){
            printSeq(v);
            break;
        }
    }while(next_permutation(v.begin(), v.end()));

    
    
    return 0;
}