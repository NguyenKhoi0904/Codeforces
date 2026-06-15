#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
#define for_cin for(int i = 0; i < n; i++)
using namespace std;
// PROBLEM A
/*
void Solve(){
    int a,b; cin >> a >> b;
    if(a == 0){
        if(b&1){
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        return;
    }
    if(a&1){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
*/

//PROBLEM B
/*
bool is_perfect_square(int n){
    return sqrt(n) == (int)sqrt(n);
}
void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    bool flag = true;
    if(is_perfect_square(n)){
        int r = sqrt(n);
        if(r == 2){
            for(char e : s){
                if(e == '0'){
                    flag = false;
                    break;
                }
            }
        }else{
            for(int i = 1; i < r-1; i++){
                for(int j = 1; j < r-1; j++){
                    if(s[i*r+j] == '1'){
                        cout << "NO\n";
                        return;
                    }
                }
            }

            for(int i = 0; i < r; i++){
                if(s[i] == '0' || s[(r-1)*r+i] == '0'){
                    cout << "NO\n";
                    return;
                }
            }

            for(int i = 0; i < r; i++){
                if(s[(i*r)] == '0' || s[(i*r)+(r-1)] == '0'){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }else flag = false;

    cout << (flag?"YES\n":"NO\n");
}
*/

// PROBLEM C
/*
void Solve(){
    ll l,r; cin >> l >> r;
    ll tmp = 1;
    while(l <= r){
        l += tmp;
        tmp++;
    }
    cout << tmp - 1 << ln;
}
*/

// PROBLEM D
void Solve(){
    int n; cin >> n;
    vector<int> p(n);
    for_cin{
        cin >> p[i];
        p[i]--;
    }
    string s; cin >> s;
    vector<int> visited(n,0);
    vector<int> ans(n,0);
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            int c = i;
            vector<int> tmp;
            while(!visited[c]){
                visited[c] = 1;
                tmp.push_back(p[c]);
                c = p[c];
            }
            int black = 0;
            for(int e : tmp){
                if(s[e] == '0') black++;
            }
            for(int e : tmp) ans[e] = black;
        }
    }
    for(int e : ans) cout << e << " ";
    cout << ln;
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}


