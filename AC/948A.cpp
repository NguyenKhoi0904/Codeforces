#include <bits/stdc++.h>

using namespace std;
int main(){
    int r,c; cin >> r >> c;
    vector<vector<char>> a(r, vector<char>(c));
    for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for (int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 'W'){
                if(i-1>=0){
                    if(a[i-1][j] == 'S'){
                        flag = false;
                        break;
                    }
                }
                if(i+1 <= r-1){
                    if(a[i+1][j] == 'S'){
                        flag = false;
                        break;
                    }
                }
                if(j-1 >= 0){
                    if(a[i][j-1] == 'S'){
                        flag = false;
                        break;
                    }
                }
                if(j+1 <= c-1){
                    if(a[i][j+1] == 'S'){
                        flag = false;
                        break;
                    }
                }
            }
        }
    }
    if(!flag){
        cout << "NO\n";
    }else{
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(a[i][j] == '.')
                    a[i][j] = 'D';
            }
        }
        cout << "YES\n";
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
