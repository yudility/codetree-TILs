#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, cnt;
vector<int> a;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    
    vector<int> v;

    v.push_back(a[0]);
    v.push_back(a[n-1]);
    a.erase(a.begin());
    a.erase(a.end()-1);

    sort(v.begin(), v.end());
    cnt++;

    while(true){
        if(v.size()==n) break;

        v.push_back(a[0]);
        sort(v.begin(), v.end());
        a.erase(a.begin());
        cnt++;
    }
   
    cout << cnt;
    

    return 0;
}