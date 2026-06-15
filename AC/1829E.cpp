#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
#define ii pair<int,int>
using namespace std;

int n,m;
vector<vector<int>> visited(1004, vector<int> (1004,0));

void BFS(int i, int j, int &ans, vector<vector<int>> &arr){
    queue<ii> q;
    q.push({i,j});
    visited[i][j] = 1;

    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};

    int tmp = 0;

    while(!q.empty()){
        ii u = q.front();
        int x = u.first, y = u.second;
        tmp += arr[x][y];
        q.pop();

        for(int i = 0; i < 4; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if(arr[new_x][new_y] != 0 && !visited[new_x][new_y]){
                visited[new_x][new_y] = 1;
                q.push({new_x, new_y});
            }
        }
    }

    ans = max(ans, tmp);
}

void Solve(){
    scanf("%d %d", &n, &m);
    vector<vector<int>> arr(n+2, vector<int> (m+2,0));
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) scanf("%d", &arr[i][j]);
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(arr[i][j] != 0 && !visited[i][j]){
                BFS(i,j, ans, arr);
            }
        }
    }

    cout << ans << ln;
}
int main(){
    IO
    int t; scanf("%d", &t);
    while(t--){
        Solve();
        for(int i = 0; i < 1004; i++){
            for(int j = 0; j < 1004; j++) visited[i][j] = 0;
        }
    }
    return 0;
}
