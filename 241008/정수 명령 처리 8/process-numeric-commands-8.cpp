#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, a;
string c;
list<int> s;

int main() {
    
    cin >> n;

    for(int i =0; i<n; i++){
        cin >> c;
        if(c=="push_front"){
            cin>>a;
            s.push_front(a);
        }
        else if(c=="push_back"){
            cin>>a;
            s.push_back(a);
        }
        else if(c=="pop_front"){
            cout << s.front() << "\n";
            s.pop_front();
        }
        else if(c=="pop_back"){
            cout << s.back() << "\n";
            s.pop_back();
        }
        else if(c=="size"){
            cout << s.size() << "\n";
        }
        else if(c=="front"){
            cout << s.front() << "\n";
        }
        else if(c=="back"){
            cout << s.back() << "\n";
        }
        else if(c=="empty"){
            int result = s.empty()? 1:0;
            cout <<  result << "\n";
        }

    }


    

    return 0;
}

    //push_front(e)
    //push_back(e)
    //pop_front() - 값 반환 x
    //pop_back() - 값 반환 x
    //size()
    //empty() - 비어있는지 true/false
    //front() - 맨 앞에 있는 데이터 반환
    //back() - 맨 뒤에 있는 데이터 반환