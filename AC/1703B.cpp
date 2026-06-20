#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        unordered_map<char,int> un_m;
        for (char e : s)
            un_m[e]++;
        int balloons = 0;
        for (auto &e: un_m){
            if (e.second >= 2) balloons += e.second-1 + 2;
            else balloons += 2;
        }
        cout << balloons << endl;
    }
    return 0;
}

