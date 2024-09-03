#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int a[3][3], n, ret;

int main() {

    for(int i=0; i<3; i++){
        cin >> n;
        int j=0;
        while(n>0){
            a[i][j]=n%10;
            n/=10;
            j++;
        }
    }

    for(int i=1; i<=9; i++){
        for(int j=i+1; j<=9; j++){

            bool win=false;

            for(int h=0; h<3; h++){
                int cnt_a=0, cnt_b=0;
                for(int w=0; w<3; w++){
                    if(a[h][w]==i) cnt_a++;
                    else if(a[h][w]==j) cnt_b++;
                }
                if(cnt_a <3 && cnt_b <3 && (cnt_a+cnt_b)==3){
                    win=true;
                    break;
                } 

                cnt_a=0;
                cnt_b=0;

                for(int w=0; w<3; w++){
                    if(a[w][h]==i) cnt_a++;
                    else if(a[w][h]==j) cnt_b++;
                }
                if(cnt_a <3 && cnt_b <3 && (cnt_a+cnt_b)==3){
                    win=true;
                    break;
                }
            }

            if(win){
                ret++;
                continue;
            }

            int cnt_a=0;
            int cnt_b=0;
            int cnt_c=0;
            int cnt_d=0;
            for(int h=0; h<3; h++){
                
                if(a[h][h]==i) cnt_a++;
                else if(a[h][h]==j) cnt_b++;

                if(a[h][2-h]==i) cnt_c++;
                else if(a[h][2-h]==j) cnt_d++;
            }

            if(cnt_a <3 && cnt_b <3 && (cnt_a+cnt_b)==3){
                ret++;
                continue;
            } 
            else if(cnt_c <3 && cnt_d <3 && (cnt_c+cnt_d)==3){
                ret++;
                continue;
            } 
        }
    }

    cout << ret;



    return 0;
}