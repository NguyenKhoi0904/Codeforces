#include <bits/stdc++.h>

using namespace std;
struct Two_Characters{
    char a;
    char b;

    bool operator<(const Two_Characters& other) const{
        if (a != other.a) return a < other.a;
        return b < other.b;
    }
};
int main(){
    int n; cin >> n;
    string s; cin >> s;
    map<Two_Characters,int> m;
    for(int i = 0; i < n-1; i++){
        Two_Characters p;
        p.a = s[i];
        p.b = s[i+1];

        m[p]++;
    }
    Two_Characters tc;
    int max = -1;
    for(auto &e : m){
        if (e.second > max){
            max = e.second;
            tc = e.first;
        }
    }
    cout << tc.a << tc.b << endl;
    return 0;
}

