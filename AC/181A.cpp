#include <bits/stdc++.h>

using namespace std;
struct Point{
    int x;
    int y;
};
int main(){
    int n,m; cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    vector<Point> arr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
            if (v[i][j] == '*') arr.push_back({i,j});
        }
    }

    int i,j;
    if (arr[0].y == arr[1].y)   j = arr[2].y;
    else if (arr[0].y == arr[2].y) j = arr[1].y;
    else j = arr[0].y;

    if (arr[0].x == arr[1].x)   i = arr[2].x;
    else if (arr[0].x == arr[2].x) i = arr[1].x;
    else i = arr[0].x;

    cout << i+1 << " " << j+1 << endl;
    return 0;
}



