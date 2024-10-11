#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, digit_max, max_e;
vector<int> a;

int main() {

    cin >> n;

    for(int i=0; i <n; i++){
        int e;
        cin >> e;
        a.push_back(e);
        max_e =max(max_e, e);
    }

    while(max_e>0){
        max_e/=10;
        digit_max++;
    }

    for(int p=digit_max; p>=0; p--){
        vector<int> new_arr[10];
        for(int i=0; i<a.size(); i++){
            
            int digit = a[i]/pow(10,digit_max-p);
            new_arr[digit].push_back(a[i]);
        }
        vector<int> store;
        for(int i=0; i<10; i++){
            for(int j=0; j< new_arr[i].size();j++){
                store.push_back(new_arr[i][j]);
            }
        }
        a=store;
        
    }

    for(auto i: a)
        cout << i  <<" ";

    return 0;
}

// function radix_sort(arr, k)
//   for pos = k - 1 ... pos >= 0:
//     set arr_new = [10][]
//     for i = 0 ... i < arr.size
//       set digit = posth digit of arr[i]
//       arr_new[digit].append(arr[i])

//     set store_arr = []
//     for i = 0 ... i < 10
//       for j = 0 ... j < arr_new[i].size
//         store_arr.append(arr_new[i][j])
  
//     arr = store_arr

//   return arr