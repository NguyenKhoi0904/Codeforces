#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<string> ans;
    int face = 0;
    for(int i = 0; i < n-1; i++){
        string tmp = "";
        for(int j = 0; j < m-1; j++){
            if (a[i][j] == 'f' || a[i][j] == 'a' || a[i][j] == 'c' || a[i][j] == 'e'){
                tmp += a[i][j];
                tmp += a[i][j+1];
                tmp += a[i+1][j];
                tmp += a[i+1][j+1];
                ans.push_back(tmp);
                tmp = "";
            }
        }
    }

    for(int i = 0; i < ans.size(); i++){
        map<char,int> ma;
        for(int j = 0; j < ans[i].size(); j++){
            ma[ans[i][j]]++;
        }
        if (ma['f']==1 && ma['a']==1 && ma['c']==1 && ma['e']==1) face++;
    }
    cout << face << endl;
    return 0;
}
