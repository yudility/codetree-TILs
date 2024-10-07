#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> v;
string s;
int n, a;

int main() {

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >>s ;
        if(s=="push_back"){
            cin >> a;
            v.push_back(a);
        }
        else if(s=="pop_back") {
            v.pop_back();
        }
        else if(s=="get") {
            cin >> a;
            cout << v[a-1] << "\n";
        }
        else if(s=="size"){
            cout << v.size() << "\n";
        }
    }
    

    return 0;
}