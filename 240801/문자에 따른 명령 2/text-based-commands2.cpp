#include <iostream>
using namespace std;
string m;
int dy[4]={1, 0, -1, 0};
int dx[4]={0, 1, 0, -1};
int x, y, direc;

int main() {
    cin >> m;

    for(int i=0; i<m.size(); i++){
        if(m[i]=='L'){
            direc = (direc-1+4)%4;
        }
        else if(m[i]=='R'){
            direc = (direc+1)%4;
        }
        else if(m[i]=='F'){
            x+=dx[direc];
            y+=dy[direc];
        }
    }

    cout << x << " " << y;
   
    return 0;
}