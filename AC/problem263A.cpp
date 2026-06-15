#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<vector<int>> v(5, vector<int>(5));
    for (int i=0; i < 5; i++){
        for (int j=0; j < 5; j++){
            cin >> v[i][j];
        }
    }
    int x,y;
    for (int i=0; i < 5; i++){
        for (int j=0; j < 5; j++){
            if (v[i][j] == 1){
                x = i;
                y = j;
                break;
            }
        }
    }
    int step = 0;
    if (x > 2){
        while(x != 2){
            x--;
            step++;
        }
    }else if (x < 2){
        while (x != 2){
            x++;
            step++;
        }
    }
    if (y > 2){
        while(y != 2){
            y--;
            step++;
        }
    }else if (y < 2){
        while(y != 2){
            y++;
            step++;
        }
    }
    cout << step << endl;
    return 0;
}

