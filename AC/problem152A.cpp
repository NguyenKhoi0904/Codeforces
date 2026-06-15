#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> mark;
    for(int i = 0; i < m; i++){
        int mm =  INT_MIN;
        for(int j = 0; j < n; j++){
            mm = max(mm, a[j][i]-'0');
        }
        mark.push_back(mm);
    }
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((a[i][j]-'0') == mark[j]){
                c++;
                break;
            }
        }
    }
    cout << c << endl;
    return 0;
}

